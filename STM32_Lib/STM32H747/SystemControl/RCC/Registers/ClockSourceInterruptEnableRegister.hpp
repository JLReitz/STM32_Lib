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

class ClockSourceInterruptEnableRegister : public stm32::intf::RegisterInterface<union RccClockSourceInterruptEnableReg>
{
public:

	ClockSourceInterruptEnableRegister(union RccClockSourceInterruptEnableReg* const regPtr);

	bool GetLsiReadyIntEn() const;
	void SetLsiReadyIntEn(bool val);

	bool GetLseReadyIntEn() const;
	void SetLseReadyIntEn(bool val);

	bool GetHsiReadyIntEn() const;
	void SetHsiReadyIntEn(bool val);

	bool GetHseReadyIntEn() const;
	void SetHseReadyIntEn(bool val);

	bool GetCsiReadyIntEn() const;
	void SetCsiReadyIntEn(bool val);

	bool GetHsi48ReadyIntEn() const;
	void SetHsi48ReadyIntEn(bool val);

	bool GetPll1ReadyIntEn() const;
	void SetPll1ReadyIntEn(bool val);

	bool GetPll2ReadyIntEn() const;
	void SetPll2ReadyIntEn(bool val);

	bool GetPll3ReadyIntEn() const;
	void SetPll3ReadyIntEn(bool val);

	bool GetLseSecurityIntEn() const;
	void SetLseSecurityIntEn(bool val);
};

}
}
}
}

