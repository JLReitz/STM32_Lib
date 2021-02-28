#include "Ahb1ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb1ClockRegister::Ahb1ClockRegister(union RccAhb1ClockReg* const regPtr)
	: RegisterInterface<union RccAhb1ClockReg>(regPtr)
{
}

bool Ahb1ClockRegister::GetDma1ClkEn() const
{
	return Reg()->bits.Dma1ClkEn; 
}

void Ahb1ClockRegister::SetDma1ClkEn(bool val)
{
	Reg()->bits.Dma1ClkEn = val; 
}

bool Ahb1ClockRegister::GetDma2ClkEn() const
{
	return Reg()->bits.Dma2ClkEn; 
}

void Ahb1ClockRegister::SetDma2ClkEn(bool val)
{
	Reg()->bits.Dma2ClkEn = val; 
}

bool Ahb1ClockRegister::GetAdc12PClkEn() const
{
	return Reg()->bits.Adc12PClkEn; 
}

void Ahb1ClockRegister::SetAdc12PClkEn(bool val)
{
	Reg()->bits.Adc12PClkEn = val; 
}

bool Ahb1ClockRegister::GetArtClkEn() const
{
	return Reg()->bits.ArtClkEn; 
}

void Ahb1ClockRegister::SetArtClkEn(bool val)
{
	Reg()->bits.ArtClkEn = val; 
}

bool Ahb1ClockRegister::GetEth1MacClkEn() const
{
	return Reg()->bits.Eth1MacClkEn; 
}

void Ahb1ClockRegister::SetEth1MacClkEn(bool val)
{
	Reg()->bits.Eth1MacClkEn = val; 
}

bool Ahb1ClockRegister::GetEth1TxClkEn() const
{
	return Reg()->bits.Eth1TxClkEn; 
}

void Ahb1ClockRegister::SetEth1TxClkEn(bool val)
{
	Reg()->bits.Eth1TxClkEn = val; 
}

bool Ahb1ClockRegister::GetEth1RcClkEn() const
{
	return Reg()->bits.Eth1RcClkEn; 
}

void Ahb1ClockRegister::SetEth1RcClkEn(bool val)
{
	Reg()->bits.Eth1RcClkEn = val; 
}

bool Ahb1ClockRegister::GetUsb2UlpiPhyClkEn() const
{
	return Reg()->bits.Usb2UlpiPhyClkEn; 
}

void Ahb1ClockRegister::SetUsb2UlpiPhyClkEn(bool val)
{
	Reg()->bits.Usb2UlpiPhyClkEn = val; 
}

bool Ahb1ClockRegister::GetUsb1OtgPClkEn() const
{
	return Reg()->bits.Usb1OtgPClkEn; 
}

void Ahb1ClockRegister::SetUsb1OtgPClkEn(bool val)
{
	Reg()->bits.Usb1OtgPClkEn = val; 
}

bool Ahb1ClockRegister::GetUsb1UlpiPhyClkEn() const
{
	return Reg()->bits.Usb1UlpiPhyClkEn; 
}

void Ahb1ClockRegister::SetUsb1UlpiPhyClkEn(bool val)
{
	Reg()->bits.Usb1UlpiPhyClkEn = val; 
}

bool Ahb1ClockRegister::GetUsb2OtgPClkEn() const
{
	return Reg()->bits.Usb2OtgPClkEn; 
}

void Ahb1ClockRegister::SetUsb2OtgPClkEn(bool val)
{
	Reg()->bits.Usb2OtgPClkEn = val; 
}

}
}
}
}
