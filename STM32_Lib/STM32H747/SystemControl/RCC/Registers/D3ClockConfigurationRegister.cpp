#include "D3ClockConfigurationRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

D3ClockConfigurationRegister::D3ClockConfigurationRegister(union RccD3ClockConfigurationReg* const regPtr)
	: RegisterInterface<union RccD3ClockConfigurationReg>(regPtr)
{
}

uint8_t D3ClockConfigurationRegister::GetApb4Prescale() const
{
	return Reg()->bits.Apb4Prescale; 
}

void D3ClockConfigurationRegister::SetApb4Prescale(uint8_t val)
{
	Reg()->bits.Apb4Prescale = val; 
}

}
}
}
}
