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

class Apb2ClockRegister : public stm32::intf::RegisterInterface<union RccApb2ClockReg>
{
public:

	Apb2ClockRegister(union RccApb2ClockReg* const regPtr);

	bool GetTimer1PClkEn() const;
	void SetTimer1PClkEn(bool val);

	bool GetTimer8PClkEn() const;
	void SetTimer8PClkEn(bool val);

	bool GetUsart1PClkEn() const;
	void SetUsart1PClkEn(bool val);

	bool GetUsart6PClkEn() const;
	void SetUsart6PClkEn(bool val);

	uint8_t Getrvsd2() const;
	void Setrvsd2(uint8_t val);

	bool GetSpi1PClkEn() const;
	void SetSpi1PClkEn(bool val);

	bool GetSpi4PClkEn() const;
	void SetSpi4PClkEn(bool val);

	bool GetTimer15PClkEn() const;
	void SetTimer15PClkEn(bool val);

	bool GetTimer16PClkEn() const;
	void SetTimer16PClkEn(bool val);

	bool GetTimer17PClkEn() const;
	void SetTimer17PClkEn(bool val);

	bool GetSpi5PClkEn() const;
	void SetSpi5PClkEn(bool val);

	bool GetSai1PClkEn() const;
	void SetSai1PClkEn(bool val);

	bool GetSai2PClkEn() const;
	void SetSai2PClkEn(bool val);

	bool GetSai3PClkEn() const;
	void SetSai3PClkEn(bool val);

	bool GetDfsdm1PClkEn() const;
	void SetDfsdm1PClkEn(bool val);

	bool GetHrTimerPClkEn() const;
	void SetHrTimerPClkEn(bool val);
};

}
}
}
}

