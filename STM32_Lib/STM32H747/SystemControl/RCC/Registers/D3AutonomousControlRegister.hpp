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

class D3AutonomousControlRegister : public stm32::intf::RegisterInterface<union RccD3AutonomousControlReg>
{
public:

	D3AutonomousControlRegister(union RccD3AutonomousControlReg* const regPtr);

	bool GetBdmaAutoModeEn() const;
	void SetBdmaAutoModeEn(bool val);

	bool GetLpUart1AutoModeEn() const;
	void SetLpUart1AutoModeEn(bool val);

	bool GetSpi6AutoModeEn() const;
	void SetSpi6AutoModeEn(bool val);

	bool GetI2c4AutoModeEn() const;
	void SetI2c4AutoModeEn(bool val);

	bool GetLpTimer2AutoModeEn() const;
	void SetLpTimer2AutoModeEn(bool val);

	bool GetLpTimer3AutoModeEn() const;
	void SetLpTimer3AutoModeEn(bool val);

	bool GetLpTimer4AutoModeEn() const;
	void SetLpTimer4AutoModeEn(bool val);

	bool GetLpTimer5AutoModeEn() const;
	void SetLpTimer5AutoModeEn(bool val);

	bool GetComp12AutoModeEn() const;
	void SetComp12AutoModeEn(bool val);

	bool GetVrefAutoModeEn() const;
	void SetVrefAutoModeEn(bool val);

	bool GetRtcAutoModeEn() const;
	void SetRtcAutoModeEn(bool val);

	bool GetCrcAutoModeEn() const;
	void SetCrcAutoModeEn(bool val);

	bool GetSai4AutoModeEn() const;
	void SetSai4AutoModeEn(bool val);

	bool GetAdc3AutoModeEn() const;
	void SetAdc3AutoModeEn(bool val);

	bool GetBackupRamAutoModeEn() const;
	void SetBackupRamAutoModeEn(bool val);

	bool GetSram4AutoModeEn() const;
	void SetSram4AutoModeEn(bool val);
};

}
}
}
}

