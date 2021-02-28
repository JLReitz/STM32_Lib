#pragma once

#include "../Registers/Registers.h"

#include <Common/Interfaces/RegisterInterface.hpp>

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

class ResetStatusRegister : public stm32::intf::RegisterInterface<union RccResetStatusReg>
{
public:

	ResetStatusRegister(union RccResetStatusReg* const regPtr);

	bool GetRemoveRstFlag() const;
	void SetRemoveRstFlag(bool val);

	bool GetCpu1RstFlag() const;
	void SetCpu1RstFlag(bool val);

	bool GetCpu2RstFlag() const;
	void SetCpu2RstFlag(bool val);

	bool GetD1PowerRstFlag() const;
	void SetD1PowerRstFlag(bool val);

	bool GetD2PowerRstFlag() const;
	void SetD2PowerRstFlag(bool val);

	bool GetBorRstFlag() const;
	void SetBorRstFlag(bool val);

	bool GetPinRstFlag() const;
	void SetPinRstFlag(bool val);

	bool GetPorRstFlag() const;
	void SetPorRstFlag(bool val);

	bool GetCpu1SystemRstFlag() const;
	void SetCpu1SystemRstFlag(bool val);

	bool GetCpu2SystemRstFlag() const;
	void SetCpu2SystemRstFlag(bool val);

	bool GetCpu1IWatchdogRstFlag() const;
	void SetCpu1IWatchdogRstFlag(bool val);

	bool GetCpu2IWatchdogRstFlag() const;
	void SetCpu2IWatchdogRstFlag(bool val);

	bool GetCpu1WWatchdogRstFlag() const;
	void SetCpu1WWatchdogRstFlag(bool val);

	bool GetCpu2WWatchdogRstFlag() const;
	void SetCpu2WWatchdogRstFlag(bool val);

	bool GetCpu1LpwrRstFlag() const;
	void SetCpu1LpwrRstFlag(bool val);

	bool GetCpu2LpwrRstFlag() const;
	void SetCpu2LpwrRstFlag(bool val);
};

}
}
}
}

