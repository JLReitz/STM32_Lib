#include "ClockRecoveryRcRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockRecoveryRcRegister::ClockRecoveryRcRegister(union RccClockRecoveryRcReg* const regPtr)
	: RegisterInterface<union RccClockRecoveryRcReg>(regPtr)
{
}

uint16_t ClockRecoveryRcRegister::GetHsi48Cal() const
{
	return Reg()->bits.Hsi48Cal; 
}

void ClockRecoveryRcRegister::SetHsi48Cal(uint16_t val)
{
	Reg()->bits.Hsi48Cal = val; 
}

}
}
}
}
