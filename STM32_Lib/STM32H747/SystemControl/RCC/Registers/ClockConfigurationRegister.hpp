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

class ClockConfigurationRegister : public stm32::intf::RegisterInterface<union RccClockConfigurationReg>
{
public:

	ClockConfigurationRegister(union RccClockConfigurationReg* const regPtr);

	uint8_t GetSysClkSwitch() const;
	void SetSysClkSwitch(uint8_t val);

	uint8_t GetSysClkSwitchStatus() const;
	void SetSysClkSwitchStatus(uint8_t val);

	bool GetSysClkSelAfterWakeup() const;
	void SetSysClkSelAfterWakeup(bool val);

	bool GetKernelClkSelAfterWakeup() const;
	void SetKernelClkSelAfterWakeup(bool val);

	uint8_t GetRtcClkDiv() const;
	void SetRtcClkDiv(uint8_t val);

	bool GetHrTimerPrescaleSel() const;
	void SetHrTimerPrescaleSel(bool val);

	bool GetTimerPrescaleSel() const;
	void SetTimerPrescaleSel(bool val);

	uint8_t GetMcuClkOut1Prescale() const;
	void SetMcuClkOut1Prescale(uint8_t val);

	uint8_t GetMcuClkOut1Sel() const;
	void SetMcuClkOut1Sel(uint8_t val);

	uint8_t GetMcuClkOut2Prescale() const;
	void SetMcuClkOut2Prescale(uint8_t val);

	uint8_t GetMcuClkOut2Sel() const;
	void SetMcuClkOut2Sel(uint8_t val);
};

}
}
}
}

