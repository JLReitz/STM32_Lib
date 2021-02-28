#include "Apb2PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb2PeripheralResetRegister::Apb2PeripheralResetRegister(union RccApb2PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccApb2PeripheralResetReg>(regPtr)
{
}

bool Apb2PeripheralResetRegister::GetTimer1BlockRst() const
{
	return Reg()->bits.Timer1BlockRst; 
}

void Apb2PeripheralResetRegister::SetTimer1BlockRst(bool val)
{
	Reg()->bits.Timer1BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetTimer8BlockRst() const
{
	return Reg()->bits.Timer8BlockRst; 
}

void Apb2PeripheralResetRegister::SetTimer8BlockRst(bool val)
{
	Reg()->bits.Timer8BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetUsart1BlockRst() const
{
	return Reg()->bits.Usart1BlockRst; 
}

void Apb2PeripheralResetRegister::SetUsart1BlockRst(bool val)
{
	Reg()->bits.Usart1BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetUsart6BlockRst() const
{
	return Reg()->bits.Usart6BlockRst; 
}

void Apb2PeripheralResetRegister::SetUsart6BlockRst(bool val)
{
	Reg()->bits.Usart6BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSpi1BlockRst() const
{
	return Reg()->bits.Spi1BlockRst; 
}

void Apb2PeripheralResetRegister::SetSpi1BlockRst(bool val)
{
	Reg()->bits.Spi1BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSpi4BlockRst() const
{
	return Reg()->bits.Spi4BlockRst; 
}

void Apb2PeripheralResetRegister::SetSpi4BlockRst(bool val)
{
	Reg()->bits.Spi4BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetTimer15BlockRst() const
{
	return Reg()->bits.Timer15BlockRst; 
}

void Apb2PeripheralResetRegister::SetTimer15BlockRst(bool val)
{
	Reg()->bits.Timer15BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetTimer16BlockRst() const
{
	return Reg()->bits.Timer16BlockRst; 
}

void Apb2PeripheralResetRegister::SetTimer16BlockRst(bool val)
{
	Reg()->bits.Timer16BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetTimer17BlockRst() const
{
	return Reg()->bits.Timer17BlockRst; 
}

void Apb2PeripheralResetRegister::SetTimer17BlockRst(bool val)
{
	Reg()->bits.Timer17BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSpi5BlockRst() const
{
	return Reg()->bits.Spi5BlockRst; 
}

void Apb2PeripheralResetRegister::SetSpi5BlockRst(bool val)
{
	Reg()->bits.Spi5BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSai1BlockRst() const
{
	return Reg()->bits.Sai1BlockRst; 
}

void Apb2PeripheralResetRegister::SetSai1BlockRst(bool val)
{
	Reg()->bits.Sai1BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSai2BlockRst() const
{
	return Reg()->bits.Sai2BlockRst; 
}

void Apb2PeripheralResetRegister::SetSai2BlockRst(bool val)
{
	Reg()->bits.Sai2BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetSai3BlockRst() const
{
	return Reg()->bits.Sai3BlockRst; 
}

void Apb2PeripheralResetRegister::SetSai3BlockRst(bool val)
{
	Reg()->bits.Sai3BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetDfsdm1BlockRst() const
{
	return Reg()->bits.Dfsdm1BlockRst; 
}

void Apb2PeripheralResetRegister::SetDfsdm1BlockRst(bool val)
{
	Reg()->bits.Dfsdm1BlockRst = val; 
}

bool Apb2PeripheralResetRegister::GetHrTimerBlockRst() const
{
	return Reg()->bits.HrTimerBlockRst; 
}

void Apb2PeripheralResetRegister::SetHrTimerBlockRst(bool val)
{
	Reg()->bits.HrTimerBlockRst = val; 
}

}
}
}
}
