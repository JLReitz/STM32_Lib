#pragma once

#include "../Registers/SourceControlRegister.hpp"
#include "../Registers/HsiConfigurationRegister.hpp"
#include "../Registers/ClockRecoveryRcRegister.hpp"
#include "../Registers/CsiConfigurationRegister.hpp"
#include "../Registers/ClockConfigurationRegister.hpp"
#include "../Registers/D1ClockConfigurationRegister.hpp"
#include "../Registers/D2ClockConfigurationRegister.hpp"
#include "../Registers/D3ClockConfigurationRegister.hpp"
#include "../Registers/PllClockSourceSelectRegister.hpp"
#include "../Registers/PllConfigurationRegister.hpp"
#include "../Registers/PllDividerRegister.hpp"
#include "../Registers/PllFractionalDividerRegister.hpp"
#include "../Registers/Domain1KernelClockConfigRegister.hpp"
#include "../Registers/Domain2KernelClockConfig1Register.hpp"
#include "../Registers/Domain2KernelClockConfig2Register.hpp"
#include "../Registers/Domain3KernelClockConfigRegister.hpp"
#include "../Registers/ClockSourceInterruptEnableRegister.hpp"
#include "../Registers/ClockSourceInterruptFlagRegister.hpp"
#include "../Registers/ClockSourceInterruptClearRegister.hpp"
#include "../Registers/BackupDomainControlRegister.hpp"
#include "../Registers/ClockControlAndStatusRegister.hpp"
#include "../Registers/Ahb3ResetRegister.hpp"
#include "../Registers/Ahb1PeripheralResetRegister.hpp"
#include "../Registers/Ahb2PeripheralResetRegister.hpp"
#include "../Registers/Ahb4PeripheralResetRegister.hpp"
#include "../Registers/Apb3PeripheralResetRegister.hpp"
#include "../Registers/Apb1PeripheralReset1Register.hpp"
#include "../Registers/Apb1PeripheralReset2Register.hpp"
#include "../Registers/Apb2PeripheralResetRegister.hpp"
#include "../Registers/Apb4PeripheralResetRegister.hpp"
#include "../Registers/GlobalControlRegister.hpp"
#include "../Registers/D3AutonomousControlRegister.hpp"
#include "../Registers/ResetStatusRegister.hpp"
#include "../Registers/Ahb3ClockRegister.hpp"
#include "../Registers/Ahb1ClockRegister.hpp"
#include "../Registers/Ahb2ClockRegister.hpp"
#include "../Registers/Ahb4ClockRegister.hpp"
#include "../Registers/Apb3ClockRegister.hpp"
#include "../Registers/Apb1Clock1Register.hpp"
#include "../Registers/Apb1Clock2Register.hpp"
#include "../Registers/Apb2ClockRegister.hpp"
#include "../Registers/Apb4ClockRegister.hpp"

#include "RccDefines.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace driver
{

/* ================================================================================================
 *  stm32h747::sysctrl::rcc::driver::RccDriver
 * ================================================================================================
 *
 * <Enter module description here>
 */
class RccDriver
{
public:

	RccDriver(struct RccRegisterBank* const regs);

	static RccDriver& Instance();

	/*
	 * HSE (High-Speed External Oscillator) related methods
	 *
	 * The HSE is a flexible input which supports either a single external clock source or an external ceramic/crystal
	 * resonator.
	 *
	 * The HSE will not be enabled by hardware until it has decided the clock source is stable and 'HseReady' is set.
	 * If any core or peripheral components have selected this clock, the hardware will not allow for it to be
	 * disabled. Please make sure that all consumers of the HSE have disconnected before calling 'TurnHseOff()' or
	 * else the command will have no affect.
	 *
	 * The HSE is automatically disabled by hardware upon entry to the 'Stop' or 'Standby' states.
	 */
	void TurnHseOn(uint32_t externalClockSpeedHz);
	void TurnHseOff();
	bool IsHseReady() const;
	uint32_t HseSpeedHz() const;

	// TODO: LSE implementation

	/*
	 * HSI (High-Speed Internal Oscillator) related methods
	 *
	 * The HSI is quick to start up and configurable in speed, but not as accurate as an external source.
	 * Speed options are:
	 * 	-	8Mhz
	 * 	-	16MHz
	 * 	-	32MHz
	 * 	-	64MHz
	 *
	 * The HSI will not be enabled by hardware until it has decided the clock source is stable and 'HsiReady' is set.
	 * If any core or peripheral components have selected this clock, the hardware will not allow for it to be
	 * disabled. Please make sure that all consumers of the HSI have disconnected before calling 'TurnHsiOff()' or
	 * else the command will have no affect.
	 *
	 * The HSI is automatically disabled by hardware upon entry to the 'Stop' or 'Standby' states.
	 */
	void TurnHsiOn(uint32_t requestedClockSpeedHz);
	void TurnHsiOff();
	bool IsHsiReady() const;
	uint32_t HsiSpeedHz() const;

	/*
	 * LSI (Low-Speed Internal Oscillator) related methods
	 *
	 * The LSI is the low-power clock source for the independent watchdogs and auto-wakeup unit.
	 *
	 * The LSI will not be enabled by hardware until it has decided the clock source is stable and 'HsiReady' is set.
	 * If any core or peripheral components have selected this clock, the hardware will not allow for it to be
	 * disabled. Please make sure that all consumers of the HSI have disconnected before calling 'TurnLsiOff()' or
	 * else the command will have no affect.
	 *
	 * The LSI remains active when the system is in the 'Stop' or 'Standby' states.
	 */
	void TurnLsiOn();
	void TurnLsiOff();
	bool IsLsiReady() const;
	uint32_t LsiSpeedHz() const;

	/*
	 * CSI (Low-Power Internal Oscillator) related methods
	 *
	 * The CSI is quicker to start up than the HSI, but has one set speed. Like the HSI, it is not as accurate as an
	 * external clock source.
	 *
	 * The CSI will not be enabled by hardware until it has decided the clock source is stable and 'HsiReady' is set.
	 * If any core or peripheral components have selected this clock, the hardware will not allow for it to be
	 * disabled. Please make sure that all consumers of the CSI have disconnected before calling 'TurnCsiOff()' or
	 * else the command will have no affect.
	 *
	 * The CSI can be configured to remain on when the system enters the 'Stop' or 'Standby' states.
	 */
	void TurnCsiOn();
	void TurnCsiOff();
	bool IsCsiReady() const;
	uint32_t CsiSpeedHz() const;
	// TODO: Enable when in stop or standby

	// TODO: HSI48 implementation

	/*
	 * The STM32H747 has 3 independent PLLs. All three are fed by the HSI, HSE, or CSI, which is put through an input
	 * divider (one per PLL) before serving as the reference clock. This reference clock must be between 1-16MHz.
	 *
	 * Each PLL contains two voltage-controlled oscillators (VCO). Their operable ranges are described below:
	 *
	 * 	VCOH:
	 * 		Input range: 2 - 16MHz
	 * 		Output range: 192 - 836MHz
	 *
	 * 	VCOL:
	 * 		Input range: 1 - 2MHz
	 * 		Output range: 150 - 420MHz
	 *
	 * The output clock speed can be calculated as
	 *
	 * 		F_vco = F_ref * (Mult + (Frac / 2^13)
	 *
	 * The VCO output is then fed through three separate output dividers to produce PLL clocks p, q and r.
	 * The final output frequency for each of these clocks is calculated as:
	 *
	 * 		F_xClk = F_vco / (Div_x + 1)
	 *
	 * All PLLs are disabled when the system enters 'Stop' or 'Standby' mode, or when an HSE error occurs if it is
	 * the source of the system clock.
	 */
	void SetPllClockSource(stm32h747::sysctrl::rcc::defines::PllClockSource source);
	void InitializePll1(uint8_t inputDivider, stm32h747::sysctrl::rcc::defines::PllVcoSelection vcoSelect,
						float clockScale);
	void SetPll1DividerP(uint8_t divp);
	void SetPll1DividerQ(uint8_t divq);
	void SetPll1DividerR(uint8_t divr);
	uint32_t Pll1PClkSpeedHz() const;
	uint32_t Pll1QClkSpeedHz() const;
	uint32_t Pll1RClkSpeedHz() const;

	void InitializePll2(uint8_t inputDivider, stm32h747::sysctrl::rcc::defines::PllVcoSelection vcoSelect,
						float clockScale);
	void SetPll2DividerP(uint8_t divp);
	void SetPll2DividerQ(uint8_t divq);
	void SetPll2DividerR(uint8_t divr);
	uint32_t Pll2PClkSpeedHz() const;
	uint32_t Pll2QClkSpeedHz() const;
	uint32_t Pll2RClkSpeedHz() const;

	void InitializePll3(uint8_t inputDivider, stm32h747::sysctrl::rcc::defines::PllVcoSelection vcoSelect,
						float clockScale);
	void SetPll3DividerP(uint8_t divp);
	void SetPll3DividerQ(uint8_t divq);
	void SetPll3DividerR(uint8_t divr);
	uint32_t Pll3PClkSpeedHz() const;
	uint32_t Pll3QClkSpeedHz() const;
	uint32_t Pll3RClkSpeedHz() const;

	/*
	 * CPU1 (M7 core) and CPU2 (M4 core) can be placed in boot-hold after a system reset or when the device exits standby.
	 *
	 * If either of these options are passed true, then the M7 core will look to BCM7 and the M4 core will look to BMC4
	 * to determine their boot state.
	 */
	void HoldCpu1Boot(bool enable);
	void HoldCpu2Boot(bool enable);

protected:

	// <Please remove "protected" access specifier if it is not used>

private:

	void Initialize();

	// Clock generation sources
	uint32_t mHsiClkHz; // High-speed internal oscillator, 8, 16, 32, or 64MHz
	uint32_t mHseClkHz; // High-speed external oscillator, 8 - 48MHz
	uint32_t mLseClkHz = 32000; // Low-speed external oscillator, set at 32KHz
	uint32_t mLsiClkHz = 32000; // Low-speed internal oscillator, set at 32KHz
	const uint32_t mCsiClkHz = 4000000; // Low-power internal oscillator, set at 4MHz
	const uint32_t mHsi48MHz = 48000000; //High-speed 48MHz internal oscillator... dare I say what it's set at?

	stm32h747::sysctrl::rcc::regs::SourceControlRegister mSourceControlReg;
	stm32h747::sysctrl::rcc::regs::HsiConfigurationRegister mHsiConfigurationReg;
	stm32h747::sysctrl::rcc::regs::ClockRecoveryRcRegister mClockRecoveryRcReg;
	stm32h747::sysctrl::rcc::regs::CsiConfigurationRegister mCsiConfigurationReg;
	stm32h747::sysctrl::rcc::regs::ClockConfigurationRegister mClockConfigurationReg;
	stm32h747::sysctrl::rcc::regs::D1ClockConfigurationRegister mD1ClockConfigurationReg;
	stm32h747::sysctrl::rcc::regs::D2ClockConfigurationRegister mD2ClockConfigurationReg;
	stm32h747::sysctrl::rcc::regs::D3ClockConfigurationRegister mD3ClockConfigurationReg;
	stm32h747::sysctrl::rcc::regs::PllClockSourceSelectRegister mPllClockSourceSelectReg;
	stm32h747::sysctrl::rcc::regs::PllConfigurationRegister mPllConfigurationReg;
	stm32h747::sysctrl::rcc::regs::PllDividerRegister mPll1DividersReg;
	stm32h747::sysctrl::rcc::regs::PllFractionalDividerRegister mPll1FractionalDividerReg;
	stm32h747::sysctrl::rcc::regs::PllDividerRegister mPll2DividersReg;
	stm32h747::sysctrl::rcc::regs::PllFractionalDividerRegister mPll2FractionalDividerReg;
	stm32h747::sysctrl::rcc::regs::PllDividerRegister mPll3DividersReg;
	stm32h747::sysctrl::rcc::regs::PllFractionalDividerRegister mPll3FractionalDividerReg;
	stm32h747::sysctrl::rcc::regs::Domain1KernelClockConfigRegister mDomain1KernelClockConfigReg;
	stm32h747::sysctrl::rcc::regs::Domain2KernelClockConfig1Register mDomain2KernelClockConfig1Reg;
	stm32h747::sysctrl::rcc::regs::Domain2KernelClockConfig2Register mDomain2KernelClockConfig2Reg;
	stm32h747::sysctrl::rcc::regs::Domain3KernelClockConfigRegister mDomain3KernelClockConfigReg;
	stm32h747::sysctrl::rcc::regs::ClockSourceInterruptEnableRegister mClockSourceInterruptEnableReg;
	stm32h747::sysctrl::rcc::regs::ClockSourceInterruptFlagRegister mClockSourceInterruptFlagReg;
	stm32h747::sysctrl::rcc::regs::ClockSourceInterruptClearRegister mClockSourceInterruptClearReg;
	stm32h747::sysctrl::rcc::regs::BackupDomainControlRegister mBackupDomainControlReg;
	stm32h747::sysctrl::rcc::regs::ClockControlAndStatusRegister mClockControlAndStatusReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ResetRegister mAhb3ResetReg;
	stm32h747::sysctrl::rcc::regs::Ahb1PeripheralResetRegister mAhb1PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::Ahb2PeripheralResetRegister mAhb2PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::Ahb4PeripheralResetRegister mAhb4PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::Apb3PeripheralResetRegister mApb3PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::Apb1PeripheralReset1Register mApb1PeripheralReset1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1PeripheralReset2Register mApb1PeripheralReset2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2PeripheralResetRegister mApb2PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::Apb4PeripheralResetRegister mApb4PeripheralResetReg;
	stm32h747::sysctrl::rcc::regs::GlobalControlRegister mGlobalControlReg;
	stm32h747::sysctrl::rcc::regs::D3AutonomousControlRegister mD3AutonomousControlReg;
	stm32h747::sysctrl::rcc::regs::ResetStatusRegister mResetStatusReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mAhb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mAhb1ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mAhb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mAhb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mApb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mApb1Clocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mApb1Clocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mApb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mApb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mAhb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mAhb1SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mAhb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mAhb4SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mApb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mApb1SleepClocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mApb1SleepClocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mApb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mApb4SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::ResetStatusRegister mCpu1ResetStatusReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mCpu1Ahb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mCpu1Ahb1ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mCpu1Ahb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mCpu1Ahb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mCpu1Apb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mCpu1Apb1Clocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mCpu1Apb1Clocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mCpu1Apb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mCpu1Apb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mCpu1Ahb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mCpu1Ahb1SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mCpu1Ahb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mCpu1Ahb4SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mCpu1Apb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mCpu1Apb1SleepClocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mCpu1Apb1SleepClocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mCpu1Apb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mCpu1Apb4SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::ResetStatusRegister mCpu2ResetStatusReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mCpu2Ahb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mCpu2Ahb1ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mCpu2Ahb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mCpu2Ahb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mCpu2Apb3ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mCpu2Apb1Clocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mCpu2Apb1Clocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mCpu2Apb2ClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mCpu2Apb4ClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb3ClockRegister mCpu2Ahb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb1ClockRegister mCpu2Ahb1SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb2ClockRegister mCpu2Ahb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Ahb4ClockRegister mCpu2Ahb4SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb3ClockRegister mCpu2Apb3SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock1Register mCpu2Apb1SleepClocks1Reg;
	stm32h747::sysctrl::rcc::regs::Apb1Clock2Register mCpu2Apb1SleepClocks2Reg;
	stm32h747::sysctrl::rcc::regs::Apb2ClockRegister mCpu2Apb2SleepClocksReg;
	stm32h747::sysctrl::rcc::regs::Apb4ClockRegister mCpu2Apb4SleepClocksReg;
};

}
}
}
}

