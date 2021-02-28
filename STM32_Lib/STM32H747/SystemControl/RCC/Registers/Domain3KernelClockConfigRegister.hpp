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

class Domain3KernelClockConfigRegister : public stm32::intf::RegisterInterface<union RccDomain3KernelClockConfigReg>
{
public:

	Domain3KernelClockConfigRegister(union RccDomain3KernelClockConfigReg* const regPtr);

	uint8_t GetLpUartClkSel() const;
	void SetLpUartClkSel(uint8_t val);

	uint8_t GetI2c4ClkSel() const;
	void SetI2c4ClkSel(uint8_t val);

	uint8_t GetLpTimer2ClkSel() const;
	void SetLpTimer2ClkSel(uint8_t val);

	uint8_t GetLpTimer345ClkSel() const;
	void SetLpTimer345ClkSel(uint8_t val);

	uint8_t GetSarAdcClkSel() const;
	void SetSarAdcClkSel(uint8_t val);

	uint8_t GetSai4AClkSel() const;
	void SetSai4AClkSel(uint8_t val);

	uint8_t GetSai4BClkSel() const;
	void SetSai4BClkSel(uint8_t val);

	uint8_t GetSpi6ClkSel() const;
	void SetSpi6ClkSel(uint8_t val);
};

}
}
}
}

