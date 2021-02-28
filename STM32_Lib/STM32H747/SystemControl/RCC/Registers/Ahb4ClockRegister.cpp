#include "Ahb4ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb4ClockRegister::Ahb4ClockRegister(union RccAhb4ClockReg* const regPtr)
	: RegisterInterface<union RccAhb4ClockReg>(regPtr)
{
}

bool Ahb4ClockRegister::GetGpioAPClkEn() const
{
	return Reg()->bits.GpioAPClkEn; 
}

void Ahb4ClockRegister::SetGpioAPClkEn(bool val)
{
	Reg()->bits.GpioAPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioBPClkEn() const
{
	return Reg()->bits.GpioBPClkEn; 
}

void Ahb4ClockRegister::SetGpioBPClkEn(bool val)
{
	Reg()->bits.GpioBPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioCPClkEn() const
{
	return Reg()->bits.GpioCPClkEn; 
}

void Ahb4ClockRegister::SetGpioCPClkEn(bool val)
{
	Reg()->bits.GpioCPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioDPClkEn() const
{
	return Reg()->bits.GpioDPClkEn; 
}

void Ahb4ClockRegister::SetGpioDPClkEn(bool val)
{
	Reg()->bits.GpioDPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioEPClkEn() const
{
	return Reg()->bits.GpioEPClkEn; 
}

void Ahb4ClockRegister::SetGpioEPClkEn(bool val)
{
	Reg()->bits.GpioEPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioFPClkEn() const
{
	return Reg()->bits.GpioFPClkEn; 
}

void Ahb4ClockRegister::SetGpioFPClkEn(bool val)
{
	Reg()->bits.GpioFPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioGPClkEn() const
{
	return Reg()->bits.GpioGPClkEn; 
}

void Ahb4ClockRegister::SetGpioGPClkEn(bool val)
{
	Reg()->bits.GpioGPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioHPClkEn() const
{
	return Reg()->bits.GpioHPClkEn; 
}

void Ahb4ClockRegister::SetGpioHPClkEn(bool val)
{
	Reg()->bits.GpioHPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioIPClkEn() const
{
	return Reg()->bits.GpioIPClkEn; 
}

void Ahb4ClockRegister::SetGpioIPClkEn(bool val)
{
	Reg()->bits.GpioIPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioJPClkEn() const
{
	return Reg()->bits.GpioJPClkEn; 
}

void Ahb4ClockRegister::SetGpioJPClkEn(bool val)
{
	Reg()->bits.GpioJPClkEn = val; 
}

bool Ahb4ClockRegister::GetGpioKPClkEn() const
{
	return Reg()->bits.GpioKPClkEn; 
}

void Ahb4ClockRegister::SetGpioKPClkEn(bool val)
{
	Reg()->bits.GpioKPClkEn = val; 
}

bool Ahb4ClockRegister::GetCrcPClkEn() const
{
	return Reg()->bits.CrcPClkEn; 
}

void Ahb4ClockRegister::SetCrcPClkEn(bool val)
{
	Reg()->bits.CrcPClkEn = val; 
}

bool Ahb4ClockRegister::GetBmdaClkEn() const
{
	return Reg()->bits.BmdaClkEn; 
}

void Ahb4ClockRegister::SetBmdaClkEn(bool val)
{
	Reg()->bits.BmdaClkEn = val; 
}

bool Ahb4ClockRegister::GetAdc3PClkEn() const
{
	return Reg()->bits.Adc3PClkEn; 
}

void Ahb4ClockRegister::SetAdc3PClkEn(bool val)
{
	Reg()->bits.Adc3PClkEn = val; 
}

bool Ahb4ClockRegister::GetHsemPClkEn() const
{
	return Reg()->bits.HsemPClkEn; 
}

void Ahb4ClockRegister::SetHsemPClkEn(bool val)
{
	Reg()->bits.HsemPClkEn = val; 
}

bool Ahb4ClockRegister::GetBkRamClkEn() const
{
	return Reg()->bits.BkRamClkEn; 
}

void Ahb4ClockRegister::SetBkRamClkEn(bool val)
{
	Reg()->bits.BkRamClkEn = val; 
}

}
}
}
}
