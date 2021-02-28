#include "ClockSourceInterruptClearRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockSourceInterruptClearRegister::ClockSourceInterruptClearRegister(union RccClockSourceInterruptClearReg* const regPtr)
	: RegisterInterface<union RccClockSourceInterruptClearReg>(regPtr)
{
}

bool ClockSourceInterruptClearRegister::GetLsiReadyIntClear() const
{
	return Reg()->bits.LsiReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetLsiReadyIntClear(bool val)
{
	Reg()->bits.LsiReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetLseReadyIntClear() const
{
	return Reg()->bits.LseReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetLseReadyIntClear(bool val)
{
	Reg()->bits.LseReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetHsiReadyIntClear() const
{
	return Reg()->bits.HsiReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetHsiReadyIntClear(bool val)
{
	Reg()->bits.HsiReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetHseReadyIntClear() const
{
	return Reg()->bits.HseReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetHseReadyIntClear(bool val)
{
	Reg()->bits.HseReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetCsiReadyIntClear() const
{
	return Reg()->bits.CsiReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetCsiReadyIntClear(bool val)
{
	Reg()->bits.CsiReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetHsi48ReadyIntClear() const
{
	return Reg()->bits.Hsi48ReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetHsi48ReadyIntClear(bool val)
{
	Reg()->bits.Hsi48ReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetPll1ReadyIntClear() const
{
	return Reg()->bits.Pll1ReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetPll1ReadyIntClear(bool val)
{
	Reg()->bits.Pll1ReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetPll2ReadyIntClear() const
{
	return Reg()->bits.Pll2ReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetPll2ReadyIntClear(bool val)
{
	Reg()->bits.Pll2ReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetPll3ReadyIntClear() const
{
	return Reg()->bits.Pll3ReadyIntClear; 
}

void ClockSourceInterruptClearRegister::SetPll3ReadyIntClear(bool val)
{
	Reg()->bits.Pll3ReadyIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetLseSecurityIntClear() const
{
	return Reg()->bits.LseSecurityIntClear; 
}

void ClockSourceInterruptClearRegister::SetLseSecurityIntClear(bool val)
{
	Reg()->bits.LseSecurityIntClear = val; 
}

bool ClockSourceInterruptClearRegister::GetHseSecurityIntClear() const
{
	return Reg()->bits.HseSecurityIntClear; 
}

void ClockSourceInterruptClearRegister::SetHseSecurityIntClear(bool val)
{
	Reg()->bits.HseSecurityIntClear = val; 
}

}
}
}
}
