#include "PllFractionalDividerRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

PllFractionalDividerRegister::PllFractionalDividerRegister(union RccPllFractionalDividerReg* const regPtr)
	: RegisterInterface<union RccPllFractionalDividerReg>(regPtr)
{
}

uint16_t PllFractionalDividerRegister::GetVcoFracFactor() const
{
	return Reg()->bits.VcoFracFactor; 
}

void PllFractionalDividerRegister::SetVcoFracFactor(uint16_t val)
{
	Reg()->bits.VcoFracFactor = val; 
}

}
}
}
}
