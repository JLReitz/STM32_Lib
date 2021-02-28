#include "Domain1KernelClockConfigRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Domain1KernelClockConfigRegister::Domain1KernelClockConfigRegister(union RccDomain1KernelClockConfigReg* const regPtr)
	: RegisterInterface<union RccDomain1KernelClockConfigReg>(regPtr)
{
}

uint8_t Domain1KernelClockConfigRegister::GetFmcClkSel() const
{
	return Reg()->bits.FmcClkSel; 
}

void Domain1KernelClockConfigRegister::SetFmcClkSel(uint8_t val)
{
	Reg()->bits.FmcClkSel = val; 
}

uint8_t Domain1KernelClockConfigRegister::GetQuadSpiClkSel() const
{
	return Reg()->bits.QuadSpiClkSel; 
}

void Domain1KernelClockConfigRegister::SetQuadSpiClkSel(uint8_t val)
{
	Reg()->bits.QuadSpiClkSel = val; 
}

bool Domain1KernelClockConfigRegister::GetDsiClkSel() const
{
	return Reg()->bits.DsiClkSel; 
}

void Domain1KernelClockConfigRegister::SetDsiClkSel(bool val)
{
	Reg()->bits.DsiClkSel = val; 
}

bool Domain1KernelClockConfigRegister::GetSdmmcClkSel() const
{
	return Reg()->bits.SdmmcClkSel; 
}

void Domain1KernelClockConfigRegister::SetSdmmcClkSel(bool val)
{
	Reg()->bits.SdmmcClkSel = val; 
}

uint8_t Domain1KernelClockConfigRegister::GetPeripheralClkSel() const
{
	return Reg()->bits.PeripheralClkSel; 
}

void Domain1KernelClockConfigRegister::SetPeripheralClkSel(uint8_t val)
{
	Reg()->bits.PeripheralClkSel = val; 
}

}
}
}
}
