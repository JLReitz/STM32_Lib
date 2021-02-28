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

class Domain1KernelClockConfigRegister : public stm32::intf::RegisterInterface<union RccDomain1KernelClockConfigReg>
{
public:

	Domain1KernelClockConfigRegister(union RccDomain1KernelClockConfigReg* const regPtr);

	uint8_t GetFmcClkSel() const;
	void SetFmcClkSel(uint8_t val);

	uint8_t GetQuadSpiClkSel() const;
	void SetQuadSpiClkSel(uint8_t val);

	bool GetDsiClkSel() const;
	void SetDsiClkSel(bool val);

	bool GetSdmmcClkSel() const;
	void SetSdmmcClkSel(bool val);

	uint8_t GetPeripheralClkSel() const;
	void SetPeripheralClkSel(uint8_t val);
};

}
}
}
}

