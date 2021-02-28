#include "GlobalControlRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

GlobalControlRegister::GlobalControlRegister(union RccGlobalControlReg* const regPtr)
	: RegisterInterface<union RccGlobalControlReg>(regPtr)
{
}

bool GlobalControlRegister::GetWatchdog1RstScope() const
{
	return Reg()->bits.Watchdog1RstScope; 
}

void GlobalControlRegister::SetWatchdog1RstScope(bool val)
{
	Reg()->bits.Watchdog1RstScope = val; 
}

bool GlobalControlRegister::GetWatchdog2RstScope() const
{
	return Reg()->bits.Watchdog2RstScope; 
}

void GlobalControlRegister::SetWatchdog2RstScope(bool val)
{
	Reg()->bits.Watchdog2RstScope = val; 
}

bool GlobalControlRegister::GetBootCpu1() const
{
	return Reg()->bits.BootCpu1; 
}

void GlobalControlRegister::SetBootCpu1(bool val)
{
	Reg()->bits.BootCpu1 = val; 
}

bool GlobalControlRegister::GetBootCpu2() const
{
	return Reg()->bits.BootCpu2; 
}

void GlobalControlRegister::SetBootCpu2(bool val)
{
	Reg()->bits.BootCpu2 = val; 
}

}
}
}
}
