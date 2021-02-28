#include "Domain2KernelClockConfig2Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Domain2KernelClockConfig2Register::Domain2KernelClockConfig2Register(union RccDomain2KernelClockConfig2Reg* const regPtr)
	: RegisterInterface<union RccDomain2KernelClockConfig2Reg>(regPtr)
{
}

uint8_t Domain2KernelClockConfig2Register::GetUsart234578ClkSel() const
{
	return Reg()->bits.Usart234578ClkSel; 
}

void Domain2KernelClockConfig2Register::SetUsart234578ClkSel(uint8_t val)
{
	Reg()->bits.Usart234578ClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetUsart16ClkSel() const
{
	return Reg()->bits.Usart16ClkSel; 
}

void Domain2KernelClockConfig2Register::SetUsart16ClkSel(uint8_t val)
{
	Reg()->bits.Usart16ClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetRngClkSel() const
{
	return Reg()->bits.RngClkSel; 
}

void Domain2KernelClockConfig2Register::SetRngClkSel(uint8_t val)
{
	Reg()->bits.RngClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetI2c123ClkSel() const
{
	return Reg()->bits.I2c123ClkSel; 
}

void Domain2KernelClockConfig2Register::SetI2c123ClkSel(uint8_t val)
{
	Reg()->bits.I2c123ClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetUsbClkSel() const
{
	return Reg()->bits.UsbClkSel; 
}

void Domain2KernelClockConfig2Register::SetUsbClkSel(uint8_t val)
{
	Reg()->bits.UsbClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetHdmiCecClkSel() const
{
	return Reg()->bits.HdmiCecClkSel; 
}

void Domain2KernelClockConfig2Register::SetHdmiCecClkSel(uint8_t val)
{
	Reg()->bits.HdmiCecClkSel = val; 
}

uint8_t Domain2KernelClockConfig2Register::GetLpTimer1ClkSel() const
{
	return Reg()->bits.LpTimer1ClkSel; 
}

void Domain2KernelClockConfig2Register::SetLpTimer1ClkSel(uint8_t val)
{
	Reg()->bits.LpTimer1ClkSel = val; 
}

}
}
}
}
