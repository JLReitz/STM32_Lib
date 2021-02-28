#include "Apb4ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb4ClockRegister::Apb4ClockRegister(union RccApb4ClockReg* const regPtr)
	: RegisterInterface<union RccApb4ClockReg>(regPtr)
{
}

bool Apb4ClockRegister::GetSysConfigPClkEn() const
{
	return Reg()->bits.SysConfigPClkEn; 
}

void Apb4ClockRegister::SetSysConfigPClkEn(bool val)
{
	Reg()->bits.SysConfigPClkEn = val; 
}

bool Apb4ClockRegister::GetLpUart1PClkEn() const
{
	return Reg()->bits.LpUart1PClkEn; 
}

void Apb4ClockRegister::SetLpUart1PClkEn(bool val)
{
	Reg()->bits.LpUart1PClkEn = val; 
}

bool Apb4ClockRegister::GetSpi6PClkEn() const
{
	return Reg()->bits.Spi6PClkEn; 
}

void Apb4ClockRegister::SetSpi6PClkEn(bool val)
{
	Reg()->bits.Spi6PClkEn = val; 
}

bool Apb4ClockRegister::GetI2c4PClkEn() const
{
	return Reg()->bits.I2c4PClkEn; 
}

void Apb4ClockRegister::SetI2c4PClkEn(bool val)
{
	Reg()->bits.I2c4PClkEn = val; 
}

bool Apb4ClockRegister::GetLpTimer2PClkEn() const
{
	return Reg()->bits.LpTimer2PClkEn; 
}

void Apb4ClockRegister::SetLpTimer2PClkEn(bool val)
{
	Reg()->bits.LpTimer2PClkEn = val; 
}

bool Apb4ClockRegister::GetLpTimer3PClkEn() const
{
	return Reg()->bits.LpTimer3PClkEn; 
}

void Apb4ClockRegister::SetLpTimer3PClkEn(bool val)
{
	Reg()->bits.LpTimer3PClkEn = val; 
}

bool Apb4ClockRegister::GetLpTimer4PClkEn() const
{
	return Reg()->bits.LpTimer4PClkEn; 
}

void Apb4ClockRegister::SetLpTimer4PClkEn(bool val)
{
	Reg()->bits.LpTimer4PClkEn = val; 
}

bool Apb4ClockRegister::GetLpTimer5PClkEn() const
{
	return Reg()->bits.LpTimer5PClkEn; 
}

void Apb4ClockRegister::SetLpTimer5PClkEn(bool val)
{
	Reg()->bits.LpTimer5PClkEn = val; 
}

bool Apb4ClockRegister::GetComp12PClkEn() const
{
	return Reg()->bits.Comp12PClkEn; 
}

void Apb4ClockRegister::SetComp12PClkEn(bool val)
{
	Reg()->bits.Comp12PClkEn = val; 
}

bool Apb4ClockRegister::GetVrefPClkEn() const
{
	return Reg()->bits.VrefPClkEn; 
}

void Apb4ClockRegister::SetVrefPClkEn(bool val)
{
	Reg()->bits.VrefPClkEn = val; 
}

bool Apb4ClockRegister::GetSai4PClkEn() const
{
	return Reg()->bits.Sai4PClkEn; 
}

void Apb4ClockRegister::SetSai4PClkEn(bool val)
{
	Reg()->bits.Sai4PClkEn = val; 
}

}
}
}
}
