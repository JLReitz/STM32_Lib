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

class GlobalControlRegister : public stm32::intf::RegisterInterface<union RccGlobalControlReg>
{
public:

	GlobalControlRegister(union RccGlobalControlReg* const regPtr);

	bool GetWatchdog1RstScope() const;
	void SetWatchdog1RstScope(bool val);

	bool GetWatchdog2RstScope() const;
	void SetWatchdog2RstScope(bool val);

	bool GetBootCpu1() const;
	void SetBootCpu1(bool val);

	bool GetBootCpu2() const;
	void SetBootCpu2(bool val);
};

}
}
}
}

