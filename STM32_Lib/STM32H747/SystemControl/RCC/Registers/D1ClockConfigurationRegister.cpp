#include "D1ClockConfigurationRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

D1ClockConfigurationRegister::D1ClockConfigurationRegister(union RccD1ClockConfigurationReg* const regPtr)
	: RegisterInterface<union RccD1ClockConfigurationReg>(regPtr)
{
}

uint8_t D1ClockConfigurationRegister::GetAhbPrescale() const
{
	return Reg()->bits.AhbPrescale; 
}

void D1ClockConfigurationRegister::SetAhbPrescale(uint8_t val)
{
	Reg()->bits.AhbPrescale = val; 
}

uint8_t D1ClockConfigurationRegister::GetApb3Prescale() const
{
	return Reg()->bits.Apb3Prescale; 
}

void D1ClockConfigurationRegister::SetApb3Prescale(uint8_t val)
{
	Reg()->bits.Apb3Prescale = val; 
}

uint8_t D1ClockConfigurationRegister::GetCorePrescale() const
{
	return Reg()->bits.CorePrescale; 
}

void D1ClockConfigurationRegister::SetCorePrescale(uint8_t val)
{
	Reg()->bits.CorePrescale = val; 
}

}
}
}
}
