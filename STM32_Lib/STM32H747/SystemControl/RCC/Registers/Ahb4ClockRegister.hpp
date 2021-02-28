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

class Ahb4ClockRegister : public stm32::intf::RegisterInterface<union RccAhb4ClockReg>
{
public:

	Ahb4ClockRegister(union RccAhb4ClockReg* const regPtr);

	bool GetGpioAPClkEn() const;
	void SetGpioAPClkEn(bool val);

	bool GetGpioBPClkEn() const;
	void SetGpioBPClkEn(bool val);

	bool GetGpioCPClkEn() const;
	void SetGpioCPClkEn(bool val);

	bool GetGpioDPClkEn() const;
	void SetGpioDPClkEn(bool val);

	bool GetGpioEPClkEn() const;
	void SetGpioEPClkEn(bool val);

	bool GetGpioFPClkEn() const;
	void SetGpioFPClkEn(bool val);

	bool GetGpioGPClkEn() const;
	void SetGpioGPClkEn(bool val);

	bool GetGpioHPClkEn() const;
	void SetGpioHPClkEn(bool val);

	bool GetGpioIPClkEn() const;
	void SetGpioIPClkEn(bool val);

	bool GetGpioJPClkEn() const;
	void SetGpioJPClkEn(bool val);

	bool GetGpioKPClkEn() const;
	void SetGpioKPClkEn(bool val);

	bool GetCrcPClkEn() const;
	void SetCrcPClkEn(bool val);

	bool GetBmdaClkEn() const;
	void SetBmdaClkEn(bool val);

	bool GetAdc3PClkEn() const;
	void SetAdc3PClkEn(bool val);

	bool GetHsemPClkEn() const;
	void SetHsemPClkEn(bool val);

	bool GetBkRamClkEn() const;
	void SetBkRamClkEn(bool val);
};

}
}
}
}

