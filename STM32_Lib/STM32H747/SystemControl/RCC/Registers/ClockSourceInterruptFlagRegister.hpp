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

class ClockSourceInterruptFlagRegister : public stm32::intf::RegisterInterface<union RccClockSourceInterruptFlagReg>
{
public:

	ClockSourceInterruptFlagRegister(union RccClockSourceInterruptFlagReg* const regPtr);

	bool GetLsiReadyInt() const;
	void SetLsiReadyInt(bool val);

	bool GetLseReadyInt() const;
	void SetLseReadyInt(bool val);

	bool GetHsiReadyInt() const;
	void SetHsiReadyInt(bool val);

	bool GetHseReadyInt() const;
	void SetHseReadyInt(bool val);

	bool GetCsiReadyInt() const;
	void SetCsiReadyInt(bool val);

	bool GetHsi48ReadyInt() const;
	void SetHsi48ReadyInt(bool val);

	bool GetPll1ReadyInt() const;
	void SetPll1ReadyInt(bool val);

	bool GetPll2ReadyInt() const;
	void SetPll2ReadyInt(bool val);

	bool GetPll3ReadyInt() const;
	void SetPll3ReadyInt(bool val);

	bool GetLseSecurityInt() const;
	void SetLseSecurityInt(bool val);

	bool GetHseSecurityInt() const;
	void SetHseSecurityInt(bool val);
};

}
}
}
}

