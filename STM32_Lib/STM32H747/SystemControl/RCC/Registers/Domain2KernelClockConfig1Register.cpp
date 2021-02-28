#include "Domain2KernelClockConfig1Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Domain2KernelClockConfig1Register::Domain2KernelClockConfig1Register(union RccDomain2KernelClockConfig1Reg* const regPtr)
	: RegisterInterface<union RccDomain2KernelClockConfig1Reg>(regPtr)
{
}

uint8_t Domain2KernelClockConfig1Register::GetSaiDfsdm1AClkSel() const
{
	return Reg()->bits.SaiDfsdm1AClkSel; 
}

void Domain2KernelClockConfig1Register::SetSaiDfsdm1AClkSel(uint8_t val)
{
	Reg()->bits.SaiDfsdm1AClkSel = val; 
}

uint8_t Domain2KernelClockConfig1Register::GetSai23ClkSel() const
{
	return Reg()->bits.Sai23ClkSel; 
}

void Domain2KernelClockConfig1Register::SetSai23ClkSel(uint8_t val)
{
	Reg()->bits.Sai23ClkSel = val; 
}

uint8_t Domain2KernelClockConfig1Register::GetSpiI2s123ClkSel() const
{
	return Reg()->bits.SpiI2s123ClkSel; 
}

void Domain2KernelClockConfig1Register::SetSpiI2s123ClkSel(uint8_t val)
{
	Reg()->bits.SpiI2s123ClkSel = val; 
}

uint8_t Domain2KernelClockConfig1Register::GetSpi45ClkSel() const
{
	return Reg()->bits.Spi45ClkSel; 
}

void Domain2KernelClockConfig1Register::SetSpi45ClkSel(uint8_t val)
{
	Reg()->bits.Spi45ClkSel = val; 
}

uint8_t Domain2KernelClockConfig1Register::GetSpdifrxClkSel() const
{
	return Reg()->bits.SpdifrxClkSel; 
}

void Domain2KernelClockConfig1Register::SetSpdifrxClkSel(uint8_t val)
{
	Reg()->bits.SpdifrxClkSel = val; 
}

bool Domain2KernelClockConfig1Register::GetDfsdm1ClkSel() const
{
	return Reg()->bits.Dfsdm1ClkSel; 
}

void Domain2KernelClockConfig1Register::SetDfsdm1ClkSel(bool val)
{
	Reg()->bits.Dfsdm1ClkSel = val; 
}

uint8_t Domain2KernelClockConfig1Register::GetFdCanClkSel() const
{
	return Reg()->bits.FdCanClkSel; 
}

void Domain2KernelClockConfig1Register::SetFdCanClkSel(uint8_t val)
{
	Reg()->bits.FdCanClkSel = val; 
}

bool Domain2KernelClockConfig1Register::GetSwpmiClkSel() const
{
	return Reg()->bits.SwpmiClkSel; 
}

void Domain2KernelClockConfig1Register::SetSwpmiClkSel(bool val)
{
	Reg()->bits.SwpmiClkSel = val; 
}

}
}
}
}
