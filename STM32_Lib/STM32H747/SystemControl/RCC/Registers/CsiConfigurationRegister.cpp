#include "CsiConfigurationRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

CsiConfigurationRegister::CsiConfigurationRegister(union RccCsiConfigurationReg* const regPtr)
	: RegisterInterface<union RccCsiConfigurationReg>(regPtr)
{
}

uint16_t CsiConfigurationRegister::GetCsiCal() const
{
	return Reg()->bits.CsiCal; 
}

void CsiConfigurationRegister::SetCsiCal(uint16_t val)
{
	Reg()->bits.CsiCal = val; 
}

uint8_t CsiConfigurationRegister::GetCsiTrim() const
{
	return Reg()->bits.CsiTrim; 
}

void CsiConfigurationRegister::SetCsiTrim(uint8_t val)
{
	Reg()->bits.CsiTrim = val; 
}

}
}
}
}
