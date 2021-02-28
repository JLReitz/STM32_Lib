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

class Domain2KernelClockConfig1Register : public stm32::intf::RegisterInterface<union RccDomain2KernelClockConfig1Reg>
{
public:

	Domain2KernelClockConfig1Register(union RccDomain2KernelClockConfig1Reg* const regPtr);

	uint8_t GetSaiDfsdm1AClkSel() const;
	void SetSaiDfsdm1AClkSel(uint8_t val);

	uint8_t GetSai23ClkSel() const;
	void SetSai23ClkSel(uint8_t val);

	uint8_t GetSpiI2s123ClkSel() const;
	void SetSpiI2s123ClkSel(uint8_t val);

	uint8_t GetSpi45ClkSel() const;
	void SetSpi45ClkSel(uint8_t val);

	uint8_t GetSpdifrxClkSel() const;
	void SetSpdifrxClkSel(uint8_t val);

	bool GetDfsdm1ClkSel() const;
	void SetDfsdm1ClkSel(bool val);

	uint8_t GetFdCanClkSel() const;
	void SetFdCanClkSel(uint8_t val);

	bool GetSwpmiClkSel() const;
	void SetSwpmiClkSel(bool val);
};

}
}
}
}

