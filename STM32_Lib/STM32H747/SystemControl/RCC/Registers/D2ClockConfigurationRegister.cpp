#include "D2ClockConfigurationRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

D2ClockConfigurationRegister::D2ClockConfigurationRegister(union RccD2ClockConfigurationReg* const regPtr)
	: RegisterInterface<union RccD2ClockConfigurationReg>(regPtr)
{
}

uint8_t D2ClockConfigurationRegister::GetApb1Prescale() const
{
	return Reg()->bits.Apb1Prescale; 
}

void D2ClockConfigurationRegister::SetApb1Prescale(uint8_t val)
{
	Reg()->bits.Apb1Prescale = val; 
}

uint8_t D2ClockConfigurationRegister::GetApb2Prescale() const
{
	return Reg()->bits.Apb2Prescale; 
}

void D2ClockConfigurationRegister::SetApb2Prescale(uint8_t val)
{
	Reg()->bits.Apb2Prescale = val; 
}

}
}
}
}
