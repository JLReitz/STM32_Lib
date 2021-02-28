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

class PllFractionalDividerRegister : public stm32::intf::RegisterInterface<union RccPllFractionalDividerReg>
{
public:

	PllFractionalDividerRegister(union RccPllFractionalDividerReg* const regPtr);

	uint16_t GetVcoFracFactor() const;
	void SetVcoFracFactor(uint16_t val);
};

}
}
}
}

