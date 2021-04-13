#include "../Include/RccImpl.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace impl
{

using namespace stm32h747::sysctrl::rcc::defines;

RccRegisterBank gRccRegs;
RccImpl gStaticInstance(&gRccRegs);

/* ================================================================================================
 *  stm32h747::sysctrl::rcc::impl::RccImpl
 *  ---------------------------------------------
 *  Methods
 * ================================================================================================
 */

// Public /////////////////////////////////////////////////////////////////

RccImpl::RccImpl(struct RccRegisterBank* const regs)
:	 mSourceControlReg(&regs->SourceControl), mHsiConfigurationReg(&regs->HsiConfiguration),
	 mClockRecoveryRcReg(&regs->ClockRecoveryRc), mCsiConfigurationReg(&regs->CsiConfiguration),
	 mClockConfigurationReg(&regs->ClockConfiguration), mD1ClockConfigurationReg(&regs->D1ClockConfiguration),
	 mD2ClockConfigurationReg(&regs->D2ClockConfiguration), mD3ClockConfigurationReg(&regs->D3ClockConfiguration),
	 mPllClockSourceSelectReg(&regs->PllClockSourceSelect), mPllConfigurationReg(&regs->PllConfiguration),
	 mPll1DividersReg(&regs->Pll1Dividers), mPll1FractionalDividerReg(&regs->Pll1FractionalDivider),
	 mPll2DividersReg(&regs->Pll2Dividers), mPll2FractionalDividerReg(&regs->Pll2FractionalDivider),
	 mPll3DividersReg(&regs->Pll3Dividers), mPll3FractionalDividerReg(&regs->Pll3FractionalDivider),
	 mDomain1KernelClockConfigReg(&regs->Domain1KernelClockConfig),
	 mDomain2KernelClockConfig1Reg(&regs->Domain2KernelClockConfig1),
	 mDomain2KernelClockConfig2Reg(&regs->Domain2KernelClockConfig2),
	 mDomain3KernelClockConfigReg(&regs->Domain3KernelClockConfig),
	 mClockSourceInterruptEnableReg(&regs->ClockSourceInterruptEnable),
	 mClockSourceInterruptFlagReg(&regs->ClockSourceInterruptFlag),
	 mClockSourceInterruptClearReg(&regs->ClockSourceInterruptClear), mBackupDomainControlReg(&regs->BackupDomainControl),
	 mClockControlAndStatusReg(&regs->ClockControlAndStatus), mAhb3ResetReg(&regs->Ahb3Reset),
	 mAhb1PeripheralResetReg(&regs->Ahb1PeripheralReset), mAhb2PeripheralResetReg(&regs->Ahb2PeripheralReset),
	 mAhb4PeripheralResetReg(&regs->Ahb4PeripheralReset), mApb3PeripheralResetReg(&regs->Apb3PeripheralReset),
	 mApb1PeripheralReset1Reg(&regs->Apb1PeripheralReset1), mApb1PeripheralReset2Reg(&regs->Apb1PeripheralReset2),
	 mApb2PeripheralResetReg(&regs->Apb2PeripheralReset), mApb4PeripheralResetReg(&regs->Apb4PeripheralReset),
	 mGlobalControlReg(&regs->GlobalControl), mD3AutonomousControlReg(&regs->D3AutonomousControl),
	 mResetStatusReg(&regs->ResetStatus), mAhb3ClocksReg(&regs->Ahb3Clocks), mAhb1ClocksReg(&regs->Ahb1Clocks),
	 mAhb2ClocksReg(&regs->Ahb2Clocks), mAhb4ClocksReg(&regs->Ahb4Clocks), mApb3ClocksReg(&regs->Apb3Clocks),
	 mApb1Clocks1Reg(&regs->Apb1Clocks1), mApb1Clocks2Reg(&regs->Apb1Clocks2), mApb2ClocksReg(&regs->Apb2Clocks),
	 mApb4ClocksReg(&regs->Apb4Clocks), mAhb3SleepClocksReg(&regs->Ahb3SleepClocks),
	 mAhb1SleepClocksReg(&regs->Ahb1SleepClocks), mAhb2SleepClocksReg(&regs->Ahb2SleepClocks),
	 mAhb4SleepClocksReg(&regs->Ahb4SleepClocks), mApb3SleepClocksReg(&regs->Apb3SleepClocks),
	 mApb1SleepClocks1Reg(&regs->Apb1SleepClocks1), mApb1SleepClocks2Reg(&regs->Apb1SleepClocks2),
	 mApb2SleepClocksReg(&regs->Apb2SleepClocks), mApb4SleepClocksReg(&regs->Apb4SleepClocks),
	 mCpu1ResetStatusReg(&regs->Cpu1ResetStatus), mCpu1Ahb3ClocksReg(&regs->Cpu1Ahb3Clocks),
	 mCpu1Ahb1ClocksReg(&regs->Cpu1Ahb1Clocks), mCpu1Ahb2ClocksReg(&regs->Cpu1Ahb2Clocks),
	 mCpu1Ahb4ClocksReg(&regs->Cpu1Ahb4Clocks), mCpu1Apb3ClocksReg(&regs->Cpu1Apb3Clocks),
	 mCpu1Apb1Clocks1Reg(&regs->Cpu1Apb1Clocks1), mCpu1Apb1Clocks2Reg(&regs->Cpu1Apb1Clocks2),
	 mCpu1Apb2ClocksReg(&regs->Cpu1Apb2Clocks), mCpu1Apb4ClocksReg(&regs->Cpu1Apb4Clocks),
	 mCpu1Ahb3SleepClocksReg(&regs->Cpu1Ahb3SleepClocks), mCpu1Ahb1SleepClocksReg(&regs->Cpu1Ahb1SleepClocks),
	 mCpu1Ahb2SleepClocksReg(&regs->Cpu1Ahb2SleepClocks), mCpu1Ahb4SleepClocksReg(&regs->Cpu1Ahb4SleepClocks),
	 mCpu1Apb3SleepClocksReg(&regs->Cpu1Apb3SleepClocks), mCpu1Apb1SleepClocks1Reg(&regs->Cpu1Apb1SleepClocks1),
	 mCpu1Apb1SleepClocks2Reg(&regs->Cpu1Apb1SleepClocks2), mCpu1Apb2SleepClocksReg(&regs->Cpu1Apb2SleepClocks),
	 mCpu1Apb4SleepClocksReg(&regs->Cpu1Apb4SleepClocks), mCpu2ResetStatusReg(&regs->Cpu2ResetStatus),
	 mCpu2Ahb3ClocksReg(&regs->Cpu2Ahb3Clocks), mCpu2Ahb1ClocksReg(&regs->Cpu2Ahb1Clocks),
	 mCpu2Ahb2ClocksReg(&regs->Cpu2Ahb2Clocks), mCpu2Ahb4ClocksReg(&regs->Cpu2Ahb4Clocks),
	 mCpu2Apb3ClocksReg(&regs->Cpu2Apb3Clocks), mCpu2Apb1Clocks1Reg(&regs->Cpu2Apb1Clocks1),
	 mCpu2Apb1Clocks2Reg(&regs->Cpu2Apb1Clocks2), mCpu2Apb2ClocksReg(&regs->Cpu2Apb2Clocks),
	 mCpu2Apb4ClocksReg(&regs->Cpu2Apb4Clocks), mCpu2Ahb3SleepClocksReg(&regs->Cpu2Ahb3SleepClocks),
	 mCpu2Ahb1SleepClocksReg(&regs->Cpu2Ahb1SleepClocks), mCpu2Ahb2SleepClocksReg(&regs->Cpu2Ahb2SleepClocks),
	 mCpu2Ahb4SleepClocksReg(&regs->Cpu2Ahb4SleepClocks), mCpu2Apb3SleepClocksReg(&regs->Cpu2Apb3SleepClocks),
	 mCpu2Apb1SleepClocks1Reg(&regs->Cpu2Apb1SleepClocks1), mCpu2Apb1SleepClocks2Reg(&regs->Cpu2Apb1SleepClocks2),
	 mCpu2Apb2SleepClocksReg(&regs->Cpu2Apb2SleepClocks), mCpu2Apb4SleepClocksReg(&regs->Cpu2Apb4SleepClocks)
{
	Initialize();
}

uint32_t RccImpl::CsiSpeedHz() const
{
	return mCsiClkHz;
}

void RccImpl::HoldCpu1Boot(bool enable)
{
	mGlobalControlReg.SetBootCpu1(!enable);
}

void RccImpl::HoldCpu2Boot(bool enable)
{
	mGlobalControlReg.SetBootCpu2(!enable);
}

uint32_t RccImpl::HseSpeedHz() const
{
	return mHseClkHz;
}

uint32_t RccImpl::HsiSpeedHz() const
{
	return mHsiClkHz;
}

void RccImpl::InitializePll1(uint8_t inputDivider, PllVcoSelection vcoSelect, float clockScale)
{
	// Configure the input divider
	mPllClockSourceSelectReg.SetPll1Prescale(inputDivider);

	// Select VCO
	mPllConfigurationReg.SetPll1VcoSel((bool)vcoSelect);

	// Set PLL1FRACEN and then write values to registers

	// Set PLLON bit then wait for PLLRDY to be raised

	// TODO implement some watchdog to break the spell if the PLL doesn't lock, then return false
}

RccImpl& RccImpl::Instance()
{
	return gStaticInstance;
}

bool RccImpl::IsCsiReady() const
{
	return mSourceControlReg.GetCsiReady();
}

bool RccImpl::IsHseReady() const
{
	return mSourceControlReg.GetHseReady();
}

bool RccImpl::IsHsiReady() const
{
	return mSourceControlReg.GetHsiReady();
}

bool RccImpl::IsLsiReady() const
{
	return mClockControlAndStatusReg.GetLsiOscReady();
}

uint32_t RccImpl::LsiSpeedHz() const
{
	return mLsiClkHz;
}

void RccImpl::SetPllClockSource(PllClockSource source)
{
	mPllClockSourceSelectReg.SetPllSource((uint8_t)source);
}

void RccImpl::TurnCsiOff()
{
	mSourceControlReg.SetCsiOn(false);
}

void RccImpl::TurnCsiOn()
{
	mSourceControlReg.SetCsiOn(true);
}

void RccImpl::TurnHseOff()
{
	mSourceControlReg.SetHseOn(false);
}

void RccImpl::TurnHseOn(uint32_t externalClockSpeedHz)
{
	// TODO: Check allowable range
	mHseClkHz = externalClockSpeedHz;
	mSourceControlReg.SetHseOn(true);
}

void RccImpl::TurnHsiOff()
{
	mSourceControlReg.SetHsiOn(false);
}

void RccImpl::TurnHsiOn(uint32_t requestedClockSpeedHz)
{
	// The HSI clock supports 8, 16, 32, or 64MHz
	if(requestedClockSpeedHz <= 8000000UL)
	{
		mHsiClkHz = 8000000UL;
		mSourceControlReg.SetHsiDiv(3);
	}
	else if(requestedClockSpeedHz <= 16000000UL)
	{
		mHsiClkHz = 16000000UL;
		mSourceControlReg.SetHsiDiv(2);
	}
	else if(requestedClockSpeedHz <= 32000000UL)
	{
		mHsiClkHz = 32000000UL;
		mSourceControlReg.SetHsiDiv(1);
	}
	else // requestedClockSpeedHz <= 64000000
	{
		mHsiClkHz = 64000000UL;
		mSourceControlReg.SetHsiDiv(0);
	}

	mSourceControlReg.SetHsiOn(true);
}

void RccImpl::TurnLsiOff()
{
	mClockControlAndStatusReg.SetLsiOscEn(false);
}

void RccImpl::TurnLsiOn()
{
	mClockControlAndStatusReg.SetLsiOscEn(true);
}

// Protected //////////////////////////////////////////////////////////////

// Private ////////////////////////////////////////////////////////////////

void RccImpl::Initialize()
{
	// Cache HSE and HSI startup configurations
	mHseClkHz = 0;

	if(mSourceControlReg.GetHsiDiv() == 0)
	{
		mHsiClkHz = 64000000UL;
	}
	else if(mSourceControlReg.GetHsiDiv() == 1)
	{
		mHsiClkHz = 32000000UL;
	}
	else if(mSourceControlReg.GetHsiDiv() == 2)
	{
		mHsiClkHz = 16000000UL;
	}
	else // HSI divisor = 3
	{
		mHsiClkHz = 8000000UL;
	}
}

}
}
}
}
