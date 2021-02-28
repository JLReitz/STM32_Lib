#include "ClockControlAndStatusRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ClockControlAndStatusRegister::ClockControlAndStatusRegister(union RccClockControlAndStatusReg* const regPtr)
	: RegisterInterface<union RccClockControlAndStatusReg>(regPtr)
{
}

bool ClockControlAndStatusRegister::GetLsiOscEn() const
{
	return Reg()->bits.LsiOscEn; 
}

void ClockControlAndStatusRegister::SetLsiOscEn(bool val)
{
	Reg()->bits.LsiOscEn = val; 
}

bool ClockControlAndStatusRegister::GetLsiOscReady() const
{
	return Reg()->bits.LsiOscReady; 
}

void ClockControlAndStatusRegister::SetLsiOscReady(bool val)
{
	Reg()->bits.LsiOscReady = val; 
}

}
}
}
}
