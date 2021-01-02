#include "PllDividerRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

PllDividerRegister::PllDividerRegister(union RccPllDividerReg* const regPtr)
	: RegisterInterface<union RccPllDividerReg>(regPtr)
{
}

uint16_t PllDividerRegister::GetVcoMultFactor() const
{
	return Reg()->bits.VcoMultFactor; 
}

void PllDividerRegister::SetVcoMultFactor(uint16_t val)
{
	Reg()->bits.VcoMultFactor = val; 
}

uint8_t PllDividerRegister::GetDivPFactor() const
{
	return Reg()->bits.DivPFactor; 
}

void PllDividerRegister::SetDivPFactor(uint8_t val)
{
	Reg()->bits.DivPFactor = val; 
}

uint8_t PllDividerRegister::GetDivQFactor() const
{
	return Reg()->bits.DivQFactor; 
}

void PllDividerRegister::SetDivQFactor(uint8_t val)
{
	Reg()->bits.DivQFactor = val; 
}

uint8_t PllDividerRegister::GetDivRFactor() const
{
	return Reg()->bits.DivRFactor; 
}

void PllDividerRegister::SetDivRFactor(uint8_t val)
{
	Reg()->bits.DivRFactor = val; 
}

}
}
}
}
