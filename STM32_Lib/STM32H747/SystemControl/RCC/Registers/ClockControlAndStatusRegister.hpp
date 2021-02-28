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

class ClockControlAndStatusRegister : public stm32::intf::RegisterInterface<union RccClockControlAndStatusReg>
{
public:

	ClockControlAndStatusRegister(union RccClockControlAndStatusReg* const regPtr);

	bool GetLsiOscEn() const;
	void SetLsiOscEn(bool val);

	bool GetLsiOscReady() const;
	void SetLsiOscReady(bool val);
};

}
}
}
}

