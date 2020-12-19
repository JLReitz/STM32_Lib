#include "ClockConfigurationRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockConfigurationRegister::ClockConfigurationRegister(union RccClockConfigurationReg* const regPtr)
	: RegisterInterface<union RccClockConfigurationReg>(regPtr)
{
}

uint8_t ClockConfigurationRegister::GetSysClkSwitch() const
{
	return Reg()->bits.SysClkSwitch; 
}

void ClockConfigurationRegister::SetSysClkSwitch(uint8_t val)
{
	Reg()->bits.SysClkSwitch = val; 
}

uint8_t ClockConfigurationRegister::GetSysClkSwitchStatus() const
{
	return Reg()->bits.SysClkSwitchStatus; 
}

void ClockConfigurationRegister::SetSysClkSwitchStatus(uint8_t val)
{
	Reg()->bits.SysClkSwitchStatus = val; 
}

bool ClockConfigurationRegister::GetSysClkSelAfterWakeup() const
{
	return Reg()->bits.SysClkSelAfterWakeup; 
}

void ClockConfigurationRegister::SetSysClkSelAfterWakeup(bool val)
{
	Reg()->bits.SysClkSelAfterWakeup = val; 
}

bool ClockConfigurationRegister::GetKernelClkSelAfterWakeup() const
{
	return Reg()->bits.KernelClkSelAfterWakeup; 
}

void ClockConfigurationRegister::SetKernelClkSelAfterWakeup(bool val)
{
	Reg()->bits.KernelClkSelAfterWakeup = val; 
}

uint8_t ClockConfigurationRegister::GetRtcClkDiv() const
{
	return Reg()->bits.RtcClkDiv; 
}

void ClockConfigurationRegister::SetRtcClkDiv(uint8_t val)
{
	Reg()->bits.RtcClkDiv = val; 
}

bool ClockConfigurationRegister::GetHrTimerPrescaleSel() const
{
	return Reg()->bits.HrTimerPrescaleSel; 
}

void ClockConfigurationRegister::SetHrTimerPrescaleSel(bool val)
{
	Reg()->bits.HrTimerPrescaleSel = val; 
}

bool ClockConfigurationRegister::GetTimerPrescaleSel() const
{
	return Reg()->bits.TimerPrescaleSel; 
}

void ClockConfigurationRegister::SetTimerPrescaleSel(bool val)
{
	Reg()->bits.TimerPrescaleSel = val; 
}

uint8_t ClockConfigurationRegister::GetMcuClkOut1Prescale() const
{
	return Reg()->bits.McuClkOut1Prescale; 
}

void ClockConfigurationRegister::SetMcuClkOut1Prescale(uint8_t val)
{
	Reg()->bits.McuClkOut1Prescale = val; 
}

uint8_t ClockConfigurationRegister::GetMcuClkOut1Sel() const
{
	return Reg()->bits.McuClkOut1Sel; 
}

void ClockConfigurationRegister::SetMcuClkOut1Sel(uint8_t val)
{
	Reg()->bits.McuClkOut1Sel = val; 
}

uint8_t ClockConfigurationRegister::GetMcuClkOut2Prescale() const
{
	return Reg()->bits.McuClkOut2Prescale; 
}

void ClockConfigurationRegister::SetMcuClkOut2Prescale(uint8_t val)
{
	Reg()->bits.McuClkOut2Prescale = val; 
}

uint8_t ClockConfigurationRegister::GetMcuClkOut2Sel() const
{
	return Reg()->bits.McuClkOut2Sel; 
}

void ClockConfigurationRegister::SetMcuClkOut2Sel(uint8_t val)
{
	Reg()->bits.McuClkOut2Sel = val; 
}

}
}
}
}
