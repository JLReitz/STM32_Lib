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

class ClockSourceInterruptClearRegister : public stm32::intf::RegisterInterface<union RccClockSourceInterruptClearReg>
{
public:

	ClockSourceInterruptClearRegister(union RccClockSourceInterruptClearReg* const regPtr);

	bool GetLsiReadyIntClear() const;
	void SetLsiReadyIntClear(bool val);

	bool GetLseReadyIntClear() const;
	void SetLseReadyIntClear(bool val);

	bool GetHsiReadyIntClear() const;
	void SetHsiReadyIntClear(bool val);

	bool GetHseReadyIntClear() const;
	void SetHseReadyIntClear(bool val);

	bool GetCsiReadyIntClear() const;
	void SetCsiReadyIntClear(bool val);

	bool GetHsi48ReadyIntClear() const;
	void SetHsi48ReadyIntClear(bool val);

	bool GetPll1ReadyIntClear() const;
	void SetPll1ReadyIntClear(bool val);

	bool GetPll2ReadyIntClear() const;
	void SetPll2ReadyIntClear(bool val);

	bool GetPll3ReadyIntClear() const;
	void SetPll3ReadyIntClear(bool val);

	bool GetLseSecurityIntClear() const;
	void SetLseSecurityIntClear(bool val);

	bool GetHseSecurityIntClear() const;
	void SetHseSecurityIntClear(bool val);
};

}
}
}
}

