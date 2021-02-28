#include "Apb3ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb3ClockRegister::Apb3ClockRegister(union RccApb3ClockReg* const regPtr)
	: RegisterInterface<union RccApb3ClockReg>(regPtr)
{
}

bool Apb3ClockRegister::GetLtdcPClkEn() const
{
	return Reg()->bits.LtdcPClkEn; 
}

void Apb3ClockRegister::SetLtdcPClkEn(bool val)
{
	Reg()->bits.LtdcPClkEn = val; 
}

bool Apb3ClockRegister::GetDsiPClkEn() const
{
	return Reg()->bits.DsiPClkEn; 
}

void Apb3ClockRegister::SetDsiPClkEn(bool val)
{
	Reg()->bits.DsiPClkEn = val; 
}

bool Apb3ClockRegister::GetWWatchdogClkEn() const
{
	return Reg()->bits.WWatchdogClkEn; 
}

void Apb3ClockRegister::SetWWatchdogClkEn(bool val)
{
	Reg()->bits.WWatchdogClkEn = val; 
}

}
}
}
}
