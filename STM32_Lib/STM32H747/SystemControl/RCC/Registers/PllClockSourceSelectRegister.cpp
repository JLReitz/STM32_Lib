#include "PllClockSourceSelectRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

PllClockSourceSelectRegister::PllClockSourceSelectRegister(union RccPllClockSourceSelectReg* const regPtr)
	: RegisterInterface<union RccPllClockSourceSelectReg>(regPtr)
{
}

uint8_t PllClockSourceSelectRegister::GetPllSource() const
{
	return Reg()->bits.PllSource; 
}

void PllClockSourceSelectRegister::SetPllSource(uint8_t val)
{
	Reg()->bits.PllSource = val; 
}

uint8_t PllClockSourceSelectRegister::GetPll1Prescale() const
{
	return Reg()->bits.Pll1Prescale; 
}

void PllClockSourceSelectRegister::SetPll1Prescale(uint8_t val)
{
	Reg()->bits.Pll1Prescale = val; 
}

uint8_t PllClockSourceSelectRegister::GetPll2Prescale() const
{
	return Reg()->bits.Pll2Prescale; 
}

void PllClockSourceSelectRegister::SetPll2Prescale(uint8_t val)
{
	Reg()->bits.Pll2Prescale = val; 
}

uint8_t PllClockSourceSelectRegister::GetPll3Prescale() const
{
	return Reg()->bits.Pll3Prescale; 
}

void PllClockSourceSelectRegister::SetPll3Prescale(uint8_t val)
{
	Reg()->bits.Pll3Prescale = val; 
}

}
}
}
}
