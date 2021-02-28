#include "Apb2ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb2ClockRegister::Apb2ClockRegister(union RccApb2ClockReg* const regPtr)
	: RegisterInterface<union RccApb2ClockReg>(regPtr)
{
}

bool Apb2ClockRegister::GetTimer1PClkEn() const
{
	return Reg()->bits.Timer1PClkEn; 
}

void Apb2ClockRegister::SetTimer1PClkEn(bool val)
{
	Reg()->bits.Timer1PClkEn = val; 
}

bool Apb2ClockRegister::GetTimer8PClkEn() const
{
	return Reg()->bits.Timer8PClkEn; 
}

void Apb2ClockRegister::SetTimer8PClkEn(bool val)
{
	Reg()->bits.Timer8PClkEn = val; 
}

bool Apb2ClockRegister::GetUsart1PClkEn() const
{
	return Reg()->bits.Usart1PClkEn; 
}

void Apb2ClockRegister::SetUsart1PClkEn(bool val)
{
	Reg()->bits.Usart1PClkEn = val; 
}

bool Apb2ClockRegister::GetUsart6PClkEn() const
{
	return Reg()->bits.Usart6PClkEn; 
}

void Apb2ClockRegister::SetUsart6PClkEn(bool val)
{
	Reg()->bits.Usart6PClkEn = val; 
}

uint8_t Apb2ClockRegister::Getrvsd2() const
{
	return Reg()->bits.rvsd2; 
}

void Apb2ClockRegister::Setrvsd2(uint8_t val)
{
	Reg()->bits.rvsd2 = val; 
}

bool Apb2ClockRegister::GetSpi1PClkEn() const
{
	return Reg()->bits.Spi1PClkEn; 
}

void Apb2ClockRegister::SetSpi1PClkEn(bool val)
{
	Reg()->bits.Spi1PClkEn = val; 
}

bool Apb2ClockRegister::GetSpi4PClkEn() const
{
	return Reg()->bits.Spi4PClkEn; 
}

void Apb2ClockRegister::SetSpi4PClkEn(bool val)
{
	Reg()->bits.Spi4PClkEn = val; 
}

bool Apb2ClockRegister::GetTimer15PClkEn() const
{
	return Reg()->bits.Timer15PClkEn; 
}

void Apb2ClockRegister::SetTimer15PClkEn(bool val)
{
	Reg()->bits.Timer15PClkEn = val; 
}

bool Apb2ClockRegister::GetTimer16PClkEn() const
{
	return Reg()->bits.Timer16PClkEn; 
}

void Apb2ClockRegister::SetTimer16PClkEn(bool val)
{
	Reg()->bits.Timer16PClkEn = val; 
}

bool Apb2ClockRegister::GetTimer17PClkEn() const
{
	return Reg()->bits.Timer17PClkEn; 
}

void Apb2ClockRegister::SetTimer17PClkEn(bool val)
{
	Reg()->bits.Timer17PClkEn = val; 
}

bool Apb2ClockRegister::GetSpi5PClkEn() const
{
	return Reg()->bits.Spi5PClkEn; 
}

void Apb2ClockRegister::SetSpi5PClkEn(bool val)
{
	Reg()->bits.Spi5PClkEn = val; 
}

bool Apb2ClockRegister::GetSai1PClkEn() const
{
	return Reg()->bits.Sai1PClkEn; 
}

void Apb2ClockRegister::SetSai1PClkEn(bool val)
{
	Reg()->bits.Sai1PClkEn = val; 
}

bool Apb2ClockRegister::GetSai2PClkEn() const
{
	return Reg()->bits.Sai2PClkEn; 
}

void Apb2ClockRegister::SetSai2PClkEn(bool val)
{
	Reg()->bits.Sai2PClkEn = val; 
}

bool Apb2ClockRegister::GetSai3PClkEn() const
{
	return Reg()->bits.Sai3PClkEn; 
}

void Apb2ClockRegister::SetSai3PClkEn(bool val)
{
	Reg()->bits.Sai3PClkEn = val; 
}

bool Apb2ClockRegister::GetDfsdm1PClkEn() const
{
	return Reg()->bits.Dfsdm1PClkEn; 
}

void Apb2ClockRegister::SetDfsdm1PClkEn(bool val)
{
	Reg()->bits.Dfsdm1PClkEn = val; 
}

bool Apb2ClockRegister::GetHrTimerPClkEn() const
{
	return Reg()->bits.HrTimerPClkEn; 
}

void Apb2ClockRegister::SetHrTimerPClkEn(bool val)
{
	Reg()->bits.HrTimerPClkEn = val; 
}

}
}
}
}
