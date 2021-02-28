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

class BackupDomainControlRegister : public stm32::intf::RegisterInterface<union RccBackupDomainControlReg>
{
public:

	BackupDomainControlRegister(union RccBackupDomainControlReg* const regPtr);

	bool GetLseOscOn() const;
	void SetLseOscOn(bool val);

	bool GetLseOscReady() const;
	void SetLseOscReady(bool val);

	bool GetLseOscBypass() const;
	void SetLseOscBypass(bool val);

	uint8_t GetLseDriveCapability() const;
	void SetLseDriveCapability(uint8_t val);

	bool GetLseSecurityEn() const;
	void SetLseSecurityEn(bool val);

	bool GetLseSecurityFail() const;
	void SetLseSecurityFail(bool val);

	uint8_t GetRtcClkSel() const;
	void SetRtcClkSel(uint8_t val);

	bool GetRtcClkEn() const;
	void SetRtcClkEn(bool val);

	bool GetBdSoftwareRst() const;
	void SetBdSoftwareRst(bool val);
};

}
}
}
}

