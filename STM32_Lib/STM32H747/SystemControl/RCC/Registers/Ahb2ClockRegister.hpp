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

class Ahb2ClockRegister : public stm32::intf::RegisterInterface<union RccAhb2ClockReg>
{
public:

	Ahb2ClockRegister(union RccAhb2ClockReg* const regPtr);

	bool GetDcmiPClkEn() const;
	void SetDcmiPClkEn(bool val);

	bool GetCryptPClkEn() const;
	void SetCryptPClkEn(bool val);

	bool GetHashPClkEn() const;
	void SetHashPClkEn(bool val);

	bool GetRngPClkEn() const;
	void SetRngPClkEn(bool val);

	bool GetSdmmc2ClkEn() const;
	void SetSdmmc2ClkEn(bool val);

	bool GetSram1BlockEn() const;
	void SetSram1BlockEn(bool val);

	bool GetSram2BlockEn() const;
	void SetSram2BlockEn(bool val);

	bool GetSram3BlockEn() const;
	void SetSram3BlockEn(bool val);
};

}
}
}
}

