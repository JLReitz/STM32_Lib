#include "Apb1Clock1Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb1Clock1Register::Apb1Clock1Register(union RccApb1Clock1Reg* const regPtr)
	: RegisterInterface<union RccApb1Clock1Reg>(regPtr)
{
}

bool Apb1Clock1Register::GetTimer2PClkEn() const
{
	return Reg()->bits.Timer2PClkEn; 
}

void Apb1Clock1Register::SetTimer2PClkEn(bool val)
{
	Reg()->bits.Timer2PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer3PClkEn() const
{
	return Reg()->bits.Timer3PClkEn; 
}

void Apb1Clock1Register::SetTimer3PClkEn(bool val)
{
	Reg()->bits.Timer3PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer4PClkEn() const
{
	return Reg()->bits.Timer4PClkEn; 
}

void Apb1Clock1Register::SetTimer4PClkEn(bool val)
{
	Reg()->bits.Timer4PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer5PClkEn() const
{
	return Reg()->bits.Timer5PClkEn; 
}

void Apb1Clock1Register::SetTimer5PClkEn(bool val)
{
	Reg()->bits.Timer5PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer6PClkEn() const
{
	return Reg()->bits.Timer6PClkEn; 
}

void Apb1Clock1Register::SetTimer6PClkEn(bool val)
{
	Reg()->bits.Timer6PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer7PClkEn() const
{
	return Reg()->bits.Timer7PClkEn; 
}

void Apb1Clock1Register::SetTimer7PClkEn(bool val)
{
	Reg()->bits.Timer7PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer12PClkEn() const
{
	return Reg()->bits.Timer12PClkEn; 
}

void Apb1Clock1Register::SetTimer12PClkEn(bool val)
{
	Reg()->bits.Timer12PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer13PClkEn() const
{
	return Reg()->bits.Timer13PClkEn; 
}

void Apb1Clock1Register::SetTimer13PClkEn(bool val)
{
	Reg()->bits.Timer13PClkEn = val; 
}

bool Apb1Clock1Register::GetTimer14PClkEn() const
{
	return Reg()->bits.Timer14PClkEn; 
}

void Apb1Clock1Register::SetTimer14PClkEn(bool val)
{
	Reg()->bits.Timer14PClkEn = val; 
}

bool Apb1Clock1Register::GetLpTimer1PClkEn() const
{
	return Reg()->bits.LpTimer1PClkEn; 
}

void Apb1Clock1Register::SetLpTimer1PClkEn(bool val)
{
	Reg()->bits.LpTimer1PClkEn = val; 
}

bool Apb1Clock1Register::GetWWatchdog2PClkEn() const
{
	return Reg()->bits.WWatchdog2PClkEn; 
}

void Apb1Clock1Register::SetWWatchdog2PClkEn(bool val)
{
	Reg()->bits.WWatchdog2PClkEn = val; 
}

bool Apb1Clock1Register::GetSpi2PClkEn() const
{
	return Reg()->bits.Spi2PClkEn; 
}

void Apb1Clock1Register::SetSpi2PClkEn(bool val)
{
	Reg()->bits.Spi2PClkEn = val; 
}

bool Apb1Clock1Register::GetSpi3PClkEn() const
{
	return Reg()->bits.Spi3PClkEn; 
}

void Apb1Clock1Register::SetSpi3PClkEn(bool val)
{
	Reg()->bits.Spi3PClkEn = val; 
}

bool Apb1Clock1Register::GetSpdifRxPClkEn() const
{
	return Reg()->bits.SpdifRxPClkEn; 
}

void Apb1Clock1Register::SetSpdifRxPClkEn(bool val)
{
	Reg()->bits.SpdifRxPClkEn = val; 
}

bool Apb1Clock1Register::GetUsart2PClkEn() const
{
	return Reg()->bits.Usart2PClkEn; 
}

void Apb1Clock1Register::SetUsart2PClkEn(bool val)
{
	Reg()->bits.Usart2PClkEn = val; 
}

bool Apb1Clock1Register::GetUsart3PClkEn() const
{
	return Reg()->bits.Usart3PClkEn; 
}

void Apb1Clock1Register::SetUsart3PClkEn(bool val)
{
	Reg()->bits.Usart3PClkEn = val; 
}

bool Apb1Clock1Register::GetUart4PClkEn() const
{
	return Reg()->bits.Uart4PClkEn; 
}

void Apb1Clock1Register::SetUart4PClkEn(bool val)
{
	Reg()->bits.Uart4PClkEn = val; 
}

bool Apb1Clock1Register::GetUart5PClkEn() const
{
	return Reg()->bits.Uart5PClkEn; 
}

void Apb1Clock1Register::SetUart5PClkEn(bool val)
{
	Reg()->bits.Uart5PClkEn = val; 
}

bool Apb1Clock1Register::GetI2c1PClkEn() const
{
	return Reg()->bits.I2c1PClkEn; 
}

void Apb1Clock1Register::SetI2c1PClkEn(bool val)
{
	Reg()->bits.I2c1PClkEn = val; 
}

bool Apb1Clock1Register::GetI2c2PClkEn() const
{
	return Reg()->bits.I2c2PClkEn; 
}

void Apb1Clock1Register::SetI2c2PClkEn(bool val)
{
	Reg()->bits.I2c2PClkEn = val; 
}

bool Apb1Clock1Register::GetI2c3PClkEn() const
{
	return Reg()->bits.I2c3PClkEn; 
}

void Apb1Clock1Register::SetI2c3PClkEn(bool val)
{
	Reg()->bits.I2c3PClkEn = val; 
}

bool Apb1Clock1Register::GetHdmiCecPClkEn() const
{
	return Reg()->bits.HdmiCecPClkEn; 
}

void Apb1Clock1Register::SetHdmiCecPClkEn(bool val)
{
	Reg()->bits.HdmiCecPClkEn = val; 
}

bool Apb1Clock1Register::GetDac12PClkEn() const
{
	return Reg()->bits.Dac12PClkEn; 
}

void Apb1Clock1Register::SetDac12PClkEn(bool val)
{
	Reg()->bits.Dac12PClkEn = val; 
}

bool Apb1Clock1Register::GetUart7PClkEn() const
{
	return Reg()->bits.Uart7PClkEn; 
}

void Apb1Clock1Register::SetUart7PClkEn(bool val)
{
	Reg()->bits.Uart7PClkEn = val; 
}

bool Apb1Clock1Register::GetUart8PClkEn() const
{
	return Reg()->bits.Uart8PClkEn; 
}

void Apb1Clock1Register::SetUart8PClkEn(bool val)
{
	Reg()->bits.Uart8PClkEn = val; 
}

}
}
}
}
