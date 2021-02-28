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

class Apb3ClockRegister : public stm32::intf::RegisterInterface<union RccApb3ClockReg>
{
public:

	Apb3ClockRegister(union RccApb3ClockReg* const regPtr);

	bool GetLtdcPClkEn() const;
	void SetLtdcPClkEn(bool val);

	bool GetDsiPClkEn() const;
	void SetDsiPClkEn(bool val);

	bool GetWWatchdogClkEn() const;
	void SetWWatchdogClkEn(bool val);
};

}
}
}
}

