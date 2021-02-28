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

class PllDividerRegister : public stm32::intf::RegisterInterface<union RccPllDividerReg>
{
public:

	PllDividerRegister(union RccPllDividerReg* const regPtr);

	uint16_t GetVcoMultFactor() const;
	void SetVcoMultFactor(uint16_t val);

	uint8_t GetDivPFactor() const;
	void SetDivPFactor(uint8_t val);

	uint8_t GetDivQFactor() const;
	void SetDivQFactor(uint8_t val);

	uint8_t GetDivRFactor() const;
	void SetDivRFactor(uint8_t val);
};

}
}
}
}

