#include "HsiConfigurationRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

HsiConfigurationRegister::HsiConfigurationRegister(union RccHsiConfigurationReg* const regPtr)
	: RegisterInterface<union RccHsiConfigurationReg>(regPtr)
{
}

uint16_t HsiConfigurationRegister::GetHsiCal() const
{
	return Reg()->bits.HsiCal; 
}

void HsiConfigurationRegister::SetHsiCal(uint16_t val)
{
	Reg()->bits.HsiCal = val; 
}

uint8_t HsiConfigurationRegister::GetHsiTrim() const
{
	return Reg()->bits.HsiTrim; 
}

void HsiConfigurationRegister::SetHsiTrim(uint8_t val)
{
	Reg()->bits.HsiTrim = val; 
}

}
}
}
}
