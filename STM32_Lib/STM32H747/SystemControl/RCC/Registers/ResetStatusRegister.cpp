#include "ResetStatusRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

ResetStatusRegister::ResetStatusRegister(union RccResetStatusReg* const regPtr)
	: RegisterInterface<union RccResetStatusReg>(regPtr)
{
}

bool ResetStatusRegister::GetRemoveRstFlag() const
{
	return Reg()->bits.RemoveRstFlag; 
}

void ResetStatusRegister::SetRemoveRstFlag(bool val)
{
	Reg()->bits.RemoveRstFlag = val; 
}

bool ResetStatusRegister::GetCpu1RstFlag() const
{
	return Reg()->bits.Cpu1RstFlag; 
}

void ResetStatusRegister::SetCpu1RstFlag(bool val)
{
	Reg()->bits.Cpu1RstFlag = val; 
}

bool ResetStatusRegister::GetCpu2RstFlag() const
{
	return Reg()->bits.Cpu2RstFlag; 
}

void ResetStatusRegister::SetCpu2RstFlag(bool val)
{
	Reg()->bits.Cpu2RstFlag = val; 
}

bool ResetStatusRegister::GetD1PowerRstFlag() const
{
	return Reg()->bits.D1PowerRstFlag; 
}

void ResetStatusRegister::SetD1PowerRstFlag(bool val)
{
	Reg()->bits.D1PowerRstFlag = val; 
}

bool ResetStatusRegister::GetD2PowerRstFlag() const
{
	return Reg()->bits.D2PowerRstFlag; 
}

void ResetStatusRegister::SetD2PowerRstFlag(bool val)
{
	Reg()->bits.D2PowerRstFlag = val; 
}

bool ResetStatusRegister::GetBorRstFlag() const
{
	return Reg()->bits.BorRstFlag; 
}

void ResetStatusRegister::SetBorRstFlag(bool val)
{
	Reg()->bits.BorRstFlag = val; 
}

bool ResetStatusRegister::GetPinRstFlag() const
{
	return Reg()->bits.PinRstFlag; 
}

void ResetStatusRegister::SetPinRstFlag(bool val)
{
	Reg()->bits.PinRstFlag = val; 
}

bool ResetStatusRegister::GetPorRstFlag() const
{
	return Reg()->bits.PorRstFlag; 
}

void ResetStatusRegister::SetPorRstFlag(bool val)
{
	Reg()->bits.PorRstFlag = val; 
}

bool ResetStatusRegister::GetCpu1SystemRstFlag() const
{
	return Reg()->bits.Cpu1SystemRstFlag; 
}

void ResetStatusRegister::SetCpu1SystemRstFlag(bool val)
{
	Reg()->bits.Cpu1SystemRstFlag = val; 
}

bool ResetStatusRegister::GetCpu2SystemRstFlag() const
{
	return Reg()->bits.Cpu2SystemRstFlag; 
}

void ResetStatusRegister::SetCpu2SystemRstFlag(bool val)
{
	Reg()->bits.Cpu2SystemRstFlag = val; 
}

bool ResetStatusRegister::GetCpu1IWatchdogRstFlag() const
{
	return Reg()->bits.Cpu1IWatchdogRstFlag; 
}

void ResetStatusRegister::SetCpu1IWatchdogRstFlag(bool val)
{
	Reg()->bits.Cpu1IWatchdogRstFlag = val; 
}

bool ResetStatusRegister::GetCpu2IWatchdogRstFlag() const
{
	return Reg()->bits.Cpu2IWatchdogRstFlag; 
}

void ResetStatusRegister::SetCpu2IWatchdogRstFlag(bool val)
{
	Reg()->bits.Cpu2IWatchdogRstFlag = val; 
}

bool ResetStatusRegister::GetCpu1WWatchdogRstFlag() const
{
	return Reg()->bits.Cpu1WWatchdogRstFlag; 
}

void ResetStatusRegister::SetCpu1WWatchdogRstFlag(bool val)
{
	Reg()->bits.Cpu1WWatchdogRstFlag = val; 
}

bool ResetStatusRegister::GetCpu2WWatchdogRstFlag() const
{
	return Reg()->bits.Cpu2WWatchdogRstFlag; 
}

void ResetStatusRegister::SetCpu2WWatchdogRstFlag(bool val)
{
	Reg()->bits.Cpu2WWatchdogRstFlag = val; 
}

bool ResetStatusRegister::GetCpu1LpwrRstFlag() const
{
	return Reg()->bits.Cpu1LpwrRstFlag; 
}

void ResetStatusRegister::SetCpu1LpwrRstFlag(bool val)
{
	Reg()->bits.Cpu1LpwrRstFlag = val; 
}

bool ResetStatusRegister::GetCpu2LpwrRstFlag() const
{
	return Reg()->bits.Cpu2LpwrRstFlag; 
}

void ResetStatusRegister::SetCpu2LpwrRstFlag(bool val)
{
	Reg()->bits.Cpu2LpwrRstFlag = val; 
}

}
}
}
}
