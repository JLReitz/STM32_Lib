#include "Apb4PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb4PeripheralResetRegister::Apb4PeripheralResetRegister(union RccApb4PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccApb4PeripheralResetReg>(regPtr)
{
}

bool Apb4PeripheralResetRegister::GetSysConfigBlockRst() const
{
	return Reg()->bits.SysConfigBlockRst; 
}

void Apb4PeripheralResetRegister::SetSysConfigBlockRst(bool val)
{
	Reg()->bits.SysConfigBlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetLpUart1BlockRst() const
{
	return Reg()->bits.LpUart1BlockRst; 
}

void Apb4PeripheralResetRegister::SetLpUart1BlockRst(bool val)
{
	Reg()->bits.LpUart1BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetSpi6BlockRst() const
{
	return Reg()->bits.Spi6BlockRst; 
}

void Apb4PeripheralResetRegister::SetSpi6BlockRst(bool val)
{
	Reg()->bits.Spi6BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetI2c4Rst() const
{
	return Reg()->bits.I2c4Rst; 
}

void Apb4PeripheralResetRegister::SetI2c4Rst(bool val)
{
	Reg()->bits.I2c4Rst = val; 
}

bool Apb4PeripheralResetRegister::GetLpTimer2BlockRst() const
{
	return Reg()->bits.LpTimer2BlockRst; 
}

void Apb4PeripheralResetRegister::SetLpTimer2BlockRst(bool val)
{
	Reg()->bits.LpTimer2BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetLpTimer3BlockRst() const
{
	return Reg()->bits.LpTimer3BlockRst; 
}

void Apb4PeripheralResetRegister::SetLpTimer3BlockRst(bool val)
{
	Reg()->bits.LpTimer3BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetLpTimer4BlockRst() const
{
	return Reg()->bits.LpTimer4BlockRst; 
}

void Apb4PeripheralResetRegister::SetLpTimer4BlockRst(bool val)
{
	Reg()->bits.LpTimer4BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetLpTimer5BlockRst() const
{
	return Reg()->bits.LpTimer5BlockRst; 
}

void Apb4PeripheralResetRegister::SetLpTimer5BlockRst(bool val)
{
	Reg()->bits.LpTimer5BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetComp12BlockRst() const
{
	return Reg()->bits.Comp12BlockRst; 
}

void Apb4PeripheralResetRegister::SetComp12BlockRst(bool val)
{
	Reg()->bits.Comp12BlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetVrefBlockRst() const
{
	return Reg()->bits.VrefBlockRst; 
}

void Apb4PeripheralResetRegister::SetVrefBlockRst(bool val)
{
	Reg()->bits.VrefBlockRst = val; 
}

bool Apb4PeripheralResetRegister::GetSai4BlockRst() const
{
	return Reg()->bits.Sai4BlockRst; 
}

void Apb4PeripheralResetRegister::SetSai4BlockRst(bool val)
{
	Reg()->bits.Sai4BlockRst = val; 
}

}
}
}
}
