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

class Apb4ClockRegister : public stm32::intf::RegisterInterface<union RccApb4ClockReg>
{
public:

	Apb4ClockRegister(union RccApb4ClockReg* const regPtr);

	bool GetSysConfigPClkEn() const;
	void SetSysConfigPClkEn(bool val);

	bool GetLpUart1PClkEn() const;
	void SetLpUart1PClkEn(bool val);

	bool GetSpi6PClkEn() const;
	void SetSpi6PClkEn(bool val);

	bool GetI2c4PClkEn() const;
	void SetI2c4PClkEn(bool val);

	bool GetLpTimer2PClkEn() const;
	void SetLpTimer2PClkEn(bool val);

	bool GetLpTimer3PClkEn() const;
	void SetLpTimer3PClkEn(bool val);

	bool GetLpTimer4PClkEn() const;
	void SetLpTimer4PClkEn(bool val);

	bool GetLpTimer5PClkEn() const;
	void SetLpTimer5PClkEn(bool val);

	bool GetComp12PClkEn() const;
	void SetComp12PClkEn(bool val);

	bool GetVrefPClkEn() const;
	void SetVrefPClkEn(bool val);

	bool GetSai4PClkEn() const;
	void SetSai4PClkEn(bool val);
};

}
}
}
}

