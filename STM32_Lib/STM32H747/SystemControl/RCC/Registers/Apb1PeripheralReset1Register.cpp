#include "Apb1PeripheralReset1Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb1PeripheralReset1Register::Apb1PeripheralReset1Register(union RccApb1PeripheralReset1Reg* const regPtr)
	: RegisterInterface<union RccApb1PeripheralReset1Reg>(regPtr)
{
}

bool Apb1PeripheralReset1Register::GetTimer2BlockRst() const
{
	return Reg()->bits.Timer2BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer2BlockRst(bool val)
{
	Reg()->bits.Timer2BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer3BlockRst() const
{
	return Reg()->bits.Timer3BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer3BlockRst(bool val)
{
	Reg()->bits.Timer3BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer4BlockRst() const
{
	return Reg()->bits.Timer4BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer4BlockRst(bool val)
{
	Reg()->bits.Timer4BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer5BlockRst() const
{
	return Reg()->bits.Timer5BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer5BlockRst(bool val)
{
	Reg()->bits.Timer5BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer6BlockRst() const
{
	return Reg()->bits.Timer6BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer6BlockRst(bool val)
{
	Reg()->bits.Timer6BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer7BlockRst() const
{
	return Reg()->bits.Timer7BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer7BlockRst(bool val)
{
	Reg()->bits.Timer7BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer12BlockRst() const
{
	return Reg()->bits.Timer12BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer12BlockRst(bool val)
{
	Reg()->bits.Timer12BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer13BlockRst() const
{
	return Reg()->bits.Timer13BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer13BlockRst(bool val)
{
	Reg()->bits.Timer13BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetTimer14BlockRst() const
{
	return Reg()->bits.Timer14BlockRst; 
}

void Apb1PeripheralReset1Register::SetTimer14BlockRst(bool val)
{
	Reg()->bits.Timer14BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetLpTimer1BlockRst() const
{
	return Reg()->bits.LpTimer1BlockRst; 
}

void Apb1PeripheralReset1Register::SetLpTimer1BlockRst(bool val)
{
	Reg()->bits.LpTimer1BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetSpi2BlockRst() const
{
	return Reg()->bits.Spi2BlockRst; 
}

void Apb1PeripheralReset1Register::SetSpi2BlockRst(bool val)
{
	Reg()->bits.Spi2BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetSpi3BlockRst() const
{
	return Reg()->bits.Spi3BlockRst; 
}

void Apb1PeripheralReset1Register::SetSpi3BlockRst(bool val)
{
	Reg()->bits.Spi3BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetSpdifRxBlockRst() const
{
	return Reg()->bits.SpdifRxBlockRst; 
}

void Apb1PeripheralReset1Register::SetSpdifRxBlockRst(bool val)
{
	Reg()->bits.SpdifRxBlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUsart2BlockRst() const
{
	return Reg()->bits.Usart2BlockRst; 
}

void Apb1PeripheralReset1Register::SetUsart2BlockRst(bool val)
{
	Reg()->bits.Usart2BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUsart3BlockRst() const
{
	return Reg()->bits.Usart3BlockRst; 
}

void Apb1PeripheralReset1Register::SetUsart3BlockRst(bool val)
{
	Reg()->bits.Usart3BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUart4BlockRst() const
{
	return Reg()->bits.Uart4BlockRst; 
}

void Apb1PeripheralReset1Register::SetUart4BlockRst(bool val)
{
	Reg()->bits.Uart4BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUart5BlockRst() const
{
	return Reg()->bits.Uart5BlockRst; 
}

void Apb1PeripheralReset1Register::SetUart5BlockRst(bool val)
{
	Reg()->bits.Uart5BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetI2c1BlockRst() const
{
	return Reg()->bits.I2c1BlockRst; 
}

void Apb1PeripheralReset1Register::SetI2c1BlockRst(bool val)
{
	Reg()->bits.I2c1BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetI2c2BlockRst() const
{
	return Reg()->bits.I2c2BlockRst; 
}

void Apb1PeripheralReset1Register::SetI2c2BlockRst(bool val)
{
	Reg()->bits.I2c2BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetI2c3BlockRst() const
{
	return Reg()->bits.I2c3BlockRst; 
}

void Apb1PeripheralReset1Register::SetI2c3BlockRst(bool val)
{
	Reg()->bits.I2c3BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetHdmiCecBlockRst() const
{
	return Reg()->bits.HdmiCecBlockRst; 
}

void Apb1PeripheralReset1Register::SetHdmiCecBlockRst(bool val)
{
	Reg()->bits.HdmiCecBlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetDac12BlockRst() const
{
	return Reg()->bits.Dac12BlockRst; 
}

void Apb1PeripheralReset1Register::SetDac12BlockRst(bool val)
{
	Reg()->bits.Dac12BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUart7BlockRst() const
{
	return Reg()->bits.Uart7BlockRst; 
}

void Apb1PeripheralReset1Register::SetUart7BlockRst(bool val)
{
	Reg()->bits.Uart7BlockRst = val; 
}

bool Apb1PeripheralReset1Register::GetUart8BLockRst() const
{
	return Reg()->bits.Uart8BLockRst; 
}

void Apb1PeripheralReset1Register::SetUart8BLockRst(bool val)
{
	Reg()->bits.Uart8BLockRst = val; 
}

}
}
}
}
