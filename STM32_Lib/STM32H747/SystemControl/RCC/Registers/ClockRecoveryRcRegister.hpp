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

class ClockRecoveryRcRegister : public stm32::intf::RegisterInterface<union RccClockRecoveryRcReg>
{
public:

	ClockRecoveryRcRegister(union RccClockRecoveryRcReg* const regPtr);

	uint16_t GetHsi48Cal() const;
	void SetHsi48Cal(uint16_t val);
};

}
}
}
}

