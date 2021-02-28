#include "ClockSourceInterruptEnableRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockSourceInterruptEnableRegister::ClockSourceInterruptEnableRegister(union RccClockSourceInterruptEnableReg* const regPtr)
	: RegisterInterface<union RccClockSourceInterruptEnableReg>(regPtr)
{
}

bool ClockSourceInterruptEnableRegister::GetLsiReadyIntEn() const
{
	return Reg()->bits.LsiReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetLsiReadyIntEn(bool val)
{
	Reg()->bits.LsiReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetLseReadyIntEn() const
{
	return Reg()->bits.LseReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetLseReadyIntEn(bool val)
{
	Reg()->bits.LseReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetHsiReadyIntEn() const
{
	return Reg()->bits.HsiReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetHsiReadyIntEn(bool val)
{
	Reg()->bits.HsiReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetHseReadyIntEn() const
{
	return Reg()->bits.HseReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetHseReadyIntEn(bool val)
{
	Reg()->bits.HseReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetCsiReadyIntEn() const
{
	return Reg()->bits.CsiReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetCsiReadyIntEn(bool val)
{
	Reg()->bits.CsiReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetHsi48ReadyIntEn() const
{
	return Reg()->bits.Hsi48ReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetHsi48ReadyIntEn(bool val)
{
	Reg()->bits.Hsi48ReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetPll1ReadyIntEn() const
{
	return Reg()->bits.Pll1ReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetPll1ReadyIntEn(bool val)
{
	Reg()->bits.Pll1ReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetPll2ReadyIntEn() const
{
	return Reg()->bits.Pll2ReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetPll2ReadyIntEn(bool val)
{
	Reg()->bits.Pll2ReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetPll3ReadyIntEn() const
{
	return Reg()->bits.Pll3ReadyIntEn; 
}

void ClockSourceInterruptEnableRegister::SetPll3ReadyIntEn(bool val)
{
	Reg()->bits.Pll3ReadyIntEn = val; 
}

bool ClockSourceInterruptEnableRegister::GetLseSecurityIntEn() const
{
	return Reg()->bits.LseSecurityIntEn; 
}

void ClockSourceInterruptEnableRegister::SetLseSecurityIntEn(bool val)
{
	Reg()->bits.LseSecurityIntEn = val; 
}

}
}
}
}
