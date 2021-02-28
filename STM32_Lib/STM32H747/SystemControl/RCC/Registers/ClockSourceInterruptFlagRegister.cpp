#include "ClockSourceInterruptFlagRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockSourceInterruptFlagRegister::ClockSourceInterruptFlagRegister(union RccClockSourceInterruptFlagReg* const regPtr)
	: RegisterInterface<union RccClockSourceInterruptFlagReg>(regPtr)
{
}

bool ClockSourceInterruptFlagRegister::GetLsiReadyInt() const
{
	return Reg()->bits.LsiReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetLsiReadyInt(bool val)
{
	Reg()->bits.LsiReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetLseReadyInt() const
{
	return Reg()->bits.LseReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetLseReadyInt(bool val)
{
	Reg()->bits.LseReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetHsiReadyInt() const
{
	return Reg()->bits.HsiReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetHsiReadyInt(bool val)
{
	Reg()->bits.HsiReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetHseReadyInt() const
{
	return Reg()->bits.HseReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetHseReadyInt(bool val)
{
	Reg()->bits.HseReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetCsiReadyInt() const
{
	return Reg()->bits.CsiReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetCsiReadyInt(bool val)
{
	Reg()->bits.CsiReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetHsi48ReadyInt() const
{
	return Reg()->bits.Hsi48ReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetHsi48ReadyInt(bool val)
{
	Reg()->bits.Hsi48ReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetPll1ReadyInt() const
{
	return Reg()->bits.Pll1ReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetPll1ReadyInt(bool val)
{
	Reg()->bits.Pll1ReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetPll2ReadyInt() const
{
	return Reg()->bits.Pll2ReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetPll2ReadyInt(bool val)
{
	Reg()->bits.Pll2ReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetPll3ReadyInt() const
{
	return Reg()->bits.Pll3ReadyInt; 
}

void ClockSourceInterruptFlagRegister::SetPll3ReadyInt(bool val)
{
	Reg()->bits.Pll3ReadyInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetLseSecurityInt() const
{
	return Reg()->bits.LseSecurityInt; 
}

void ClockSourceInterruptFlagRegister::SetLseSecurityInt(bool val)
{
	Reg()->bits.LseSecurityInt = val; 
}

bool ClockSourceInterruptFlagRegister::GetHseSecurityInt() const
{
	return Reg()->bits.HseSecurityInt; 
}

void ClockSourceInterruptFlagRegister::SetHseSecurityInt(bool val)
{
	Reg()->bits.HseSecurityInt = val; 
}

}
}
}
}
