#include "Domain3KernelClockConfigRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Domain3KernelClockConfigRegister::Domain3KernelClockConfigRegister(union RccDomain3KernelClockConfigReg* const regPtr)
	: RegisterInterface<union RccDomain3KernelClockConfigReg>(regPtr)
{
}

uint8_t Domain3KernelClockConfigRegister::GetLpUartClkSel() const
{
	return Reg()->bits.LpUartClkSel; 
}

void Domain3KernelClockConfigRegister::SetLpUartClkSel(uint8_t val)
{
	Reg()->bits.LpUartClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetI2c4ClkSel() const
{
	return Reg()->bits.I2c4ClkSel; 
}

void Domain3KernelClockConfigRegister::SetI2c4ClkSel(uint8_t val)
{
	Reg()->bits.I2c4ClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetLpTimer2ClkSel() const
{
	return Reg()->bits.LpTimer2ClkSel; 
}

void Domain3KernelClockConfigRegister::SetLpTimer2ClkSel(uint8_t val)
{
	Reg()->bits.LpTimer2ClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetLpTimer345ClkSel() const
{
	return Reg()->bits.LpTimer345ClkSel; 
}

void Domain3KernelClockConfigRegister::SetLpTimer345ClkSel(uint8_t val)
{
	Reg()->bits.LpTimer345ClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetSarAdcClkSel() const
{
	return Reg()->bits.SarAdcClkSel; 
}

void Domain3KernelClockConfigRegister::SetSarAdcClkSel(uint8_t val)
{
	Reg()->bits.SarAdcClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetSai4AClkSel() const
{
	return Reg()->bits.Sai4AClkSel; 
}

void Domain3KernelClockConfigRegister::SetSai4AClkSel(uint8_t val)
{
	Reg()->bits.Sai4AClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetSai4BClkSel() const
{
	return Reg()->bits.Sai4BClkSel; 
}

void Domain3KernelClockConfigRegister::SetSai4BClkSel(uint8_t val)
{
	Reg()->bits.Sai4BClkSel = val; 
}

uint8_t Domain3KernelClockConfigRegister::GetSpi6ClkSel() const
{
	return Reg()->bits.Spi6ClkSel; 
}

void Domain3KernelClockConfigRegister::SetSpi6ClkSel(uint8_t val)
{
	Reg()->bits.Spi6ClkSel = val; 
}

}
}
}
}
