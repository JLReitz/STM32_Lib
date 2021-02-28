#include "Ahb1PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb1PeripheralResetRegister::Ahb1PeripheralResetRegister(union RccAhb1PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccAhb1PeripheralResetReg>(regPtr)
{
}

bool Ahb1PeripheralResetRegister::GetDma1BlockRst() const
{
	return Reg()->bits.Dma1BlockRst; 
}

void Ahb1PeripheralResetRegister::SetDma1BlockRst(bool val)
{
	Reg()->bits.Dma1BlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetDma2BlockRst() const
{
	return Reg()->bits.Dma2BlockRst; 
}

void Ahb1PeripheralResetRegister::SetDma2BlockRst(bool val)
{
	Reg()->bits.Dma2BlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetAdc12BlockRst() const
{
	return Reg()->bits.Adc12BlockRst; 
}

void Ahb1PeripheralResetRegister::SetAdc12BlockRst(bool val)
{
	Reg()->bits.Adc12BlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetArtBlockRst() const
{
	return Reg()->bits.ArtBlockRst; 
}

void Ahb1PeripheralResetRegister::SetArtBlockRst(bool val)
{
	Reg()->bits.ArtBlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetEth1MacBlockRst() const
{
	return Reg()->bits.Eth1MacBlockRst; 
}

void Ahb1PeripheralResetRegister::SetEth1MacBlockRst(bool val)
{
	Reg()->bits.Eth1MacBlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetUsb1OtgBlockRst() const
{
	return Reg()->bits.Usb1OtgBlockRst; 
}

void Ahb1PeripheralResetRegister::SetUsb1OtgBlockRst(bool val)
{
	Reg()->bits.Usb1OtgBlockRst = val; 
}

bool Ahb1PeripheralResetRegister::GetUsb2OtgBlockRst() const
{
	return Reg()->bits.Usb2OtgBlockRst; 
}

void Ahb1PeripheralResetRegister::SetUsb2OtgBlockRst(bool val)
{
	Reg()->bits.Usb2OtgBlockRst = val; 
}

}
}
}
}
