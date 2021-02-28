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

class Apb1Clock1Register : public stm32::intf::RegisterInterface<union RccApb1Clock1Reg>
{
public:

	Apb1Clock1Register(union RccApb1Clock1Reg* const regPtr);

	bool GetTimer2PClkEn() const;
	void SetTimer2PClkEn(bool val);

	bool GetTimer3PClkEn() const;
	void SetTimer3PClkEn(bool val);

	bool GetTimer4PClkEn() const;
	void SetTimer4PClkEn(bool val);

	bool GetTimer5PClkEn() const;
	void SetTimer5PClkEn(bool val);

	bool GetTimer6PClkEn() const;
	void SetTimer6PClkEn(bool val);

	bool GetTimer7PClkEn() const;
	void SetTimer7PClkEn(bool val);

	bool GetTimer12PClkEn() const;
	void SetTimer12PClkEn(bool val);

	bool GetTimer13PClkEn() const;
	void SetTimer13PClkEn(bool val);

	bool GetTimer14PClkEn() const;
	void SetTimer14PClkEn(bool val);

	bool GetLpTimer1PClkEn() const;
	void SetLpTimer1PClkEn(bool val);

	bool GetWWatchdog2PClkEn() const;
	void SetWWatchdog2PClkEn(bool val);

	bool GetSpi2PClkEn() const;
	void SetSpi2PClkEn(bool val);

	bool GetSpi3PClkEn() const;
	void SetSpi3PClkEn(bool val);

	bool GetSpdifRxPClkEn() const;
	void SetSpdifRxPClkEn(bool val);

	bool GetUsart2PClkEn() const;
	void SetUsart2PClkEn(bool val);

	bool GetUsart3PClkEn() const;
	void SetUsart3PClkEn(bool val);

	bool GetUart4PClkEn() const;
	void SetUart4PClkEn(bool val);

	bool GetUart5PClkEn() const;
	void SetUart5PClkEn(bool val);

	bool GetI2c1PClkEn() const;
	void SetI2c1PClkEn(bool val);

	bool GetI2c2PClkEn() const;
	void SetI2c2PClkEn(bool val);

	bool GetI2c3PClkEn() const;
	void SetI2c3PClkEn(bool val);

	bool GetHdmiCecPClkEn() const;
	void SetHdmiCecPClkEn(bool val);

	bool GetDac12PClkEn() const;
	void SetDac12PClkEn(bool val);

	bool GetUart7PClkEn() const;
	void SetUart7PClkEn(bool val);

	bool GetUart8PClkEn() const;
	void SetUart8PClkEn(bool val);
};

}
}
}
}

