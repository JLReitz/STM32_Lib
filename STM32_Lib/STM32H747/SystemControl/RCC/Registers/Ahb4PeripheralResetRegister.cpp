#include "Ahb4PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb4PeripheralResetRegister::Ahb4PeripheralResetRegister(union RccAhb4PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccAhb4PeripheralResetReg>(regPtr)
{
}

bool Ahb4PeripheralResetRegister::GetGpioABlockRst() const
{
	return Reg()->bits.GpioABlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioABlockRst(bool val)
{
	Reg()->bits.GpioABlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioBBlockRst() const
{
	return Reg()->bits.GpioBBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioBBlockRst(bool val)
{
	Reg()->bits.GpioBBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioCBlockRst() const
{
	return Reg()->bits.GpioCBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioCBlockRst(bool val)
{
	Reg()->bits.GpioCBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioDBlockRst() const
{
	return Reg()->bits.GpioDBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioDBlockRst(bool val)
{
	Reg()->bits.GpioDBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioEBlockRst() const
{
	return Reg()->bits.GpioEBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioEBlockRst(bool val)
{
	Reg()->bits.GpioEBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioFBlockRst() const
{
	return Reg()->bits.GpioFBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioFBlockRst(bool val)
{
	Reg()->bits.GpioFBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioGBlockRst() const
{
	return Reg()->bits.GpioGBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioGBlockRst(bool val)
{
	Reg()->bits.GpioGBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioHBlockRst() const
{
	return Reg()->bits.GpioHBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioHBlockRst(bool val)
{
	Reg()->bits.GpioHBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioIBlockRst() const
{
	return Reg()->bits.GpioIBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioIBlockRst(bool val)
{
	Reg()->bits.GpioIBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioJBlockRst() const
{
	return Reg()->bits.GpioJBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioJBlockRst(bool val)
{
	Reg()->bits.GpioJBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetGpioKBlockRst() const
{
	return Reg()->bits.GpioKBlockRst; 
}

void Ahb4PeripheralResetRegister::SetGpioKBlockRst(bool val)
{
	Reg()->bits.GpioKBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetCrcBlockRst() const
{
	return Reg()->bits.CrcBlockRst; 
}

void Ahb4PeripheralResetRegister::SetCrcBlockRst(bool val)
{
	Reg()->bits.CrcBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetBdmaBlockRst() const
{
	return Reg()->bits.BdmaBlockRst; 
}

void Ahb4PeripheralResetRegister::SetBdmaBlockRst(bool val)
{
	Reg()->bits.BdmaBlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetAdc3BlockRst() const
{
	return Reg()->bits.Adc3BlockRst; 
}

void Ahb4PeripheralResetRegister::SetAdc3BlockRst(bool val)
{
	Reg()->bits.Adc3BlockRst = val; 
}

bool Ahb4PeripheralResetRegister::GetHsemBlockRst() const
{
	return Reg()->bits.HsemBlockRst; 
}

void Ahb4PeripheralResetRegister::SetHsemBlockRst(bool val)
{
	Reg()->bits.HsemBlockRst = val; 
}

}
}
}
}
