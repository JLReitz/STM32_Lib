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

class Domain2KernelClockConfig2Register : public stm32::intf::RegisterInterface<union RccDomain2KernelClockConfig2Reg>
{
public:

	Domain2KernelClockConfig2Register(union RccDomain2KernelClockConfig2Reg* const regPtr);

	uint8_t GetUsart234578ClkSel() const;
	void SetUsart234578ClkSel(uint8_t val);

	uint8_t GetUsart16ClkSel() const;
	void SetUsart16ClkSel(uint8_t val);

	uint8_t GetRngClkSel() const;
	void SetRngClkSel(uint8_t val);

	uint8_t GetI2c123ClkSel() const;
	void SetI2c123ClkSel(uint8_t val);

	uint8_t GetUsbClkSel() const;
	void SetUsbClkSel(uint8_t val);

	uint8_t GetHdmiCecClkSel() const;
	void SetHdmiCecClkSel(uint8_t val);

	uint8_t GetLpTimer1ClkSel() const;
	void SetLpTimer1ClkSel(uint8_t val);
};

}
}
}
}

