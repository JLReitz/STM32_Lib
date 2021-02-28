#include "BackupDomainControlRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

BackupDomainControlRegister::BackupDomainControlRegister(union RccBackupDomainControlReg* const regPtr)
	: RegisterInterface<union RccBackupDomainControlReg>(regPtr)
{
}

bool BackupDomainControlRegister::GetLseOscOn() const
{
	return Reg()->bits.LseOscOn; 
}

void BackupDomainControlRegister::SetLseOscOn(bool val)
{
	Reg()->bits.LseOscOn = val; 
}

bool BackupDomainControlRegister::GetLseOscReady() const
{
	return Reg()->bits.LseOscReady; 
}

void BackupDomainControlRegister::SetLseOscReady(bool val)
{
	Reg()->bits.LseOscReady = val; 
}

bool BackupDomainControlRegister::GetLseOscBypass() const
{
	return Reg()->bits.LseOscBypass; 
}

void BackupDomainControlRegister::SetLseOscBypass(bool val)
{
	Reg()->bits.LseOscBypass = val; 
}

uint8_t BackupDomainControlRegister::GetLseDriveCapability() const
{
	return Reg()->bits.LseDriveCapability; 
}

void BackupDomainControlRegister::SetLseDriveCapability(uint8_t val)
{
	Reg()->bits.LseDriveCapability = val; 
}

bool BackupDomainControlRegister::GetLseSecurityEn() const
{
	return Reg()->bits.LseSecurityEn; 
}

void BackupDomainControlRegister::SetLseSecurityEn(bool val)
{
	Reg()->bits.LseSecurityEn = val; 
}

bool BackupDomainControlRegister::GetLseSecurityFail() const
{
	return Reg()->bits.LseSecurityFail; 
}

void BackupDomainControlRegister::SetLseSecurityFail(bool val)
{
	Reg()->bits.LseSecurityFail = val; 
}

uint8_t BackupDomainControlRegister::GetRtcClkSel() const
{
	return Reg()->bits.RtcClkSel; 
}

void BackupDomainControlRegister::SetRtcClkSel(uint8_t val)
{
	Reg()->bits.RtcClkSel = val; 
}

bool BackupDomainControlRegister::GetRtcClkEn() const
{
	return Reg()->bits.RtcClkEn; 
}

void BackupDomainControlRegister::SetRtcClkEn(bool val)
{
	Reg()->bits.RtcClkEn = val; 
}

bool BackupDomainControlRegister::GetBdSoftwareRst() const
{
	return Reg()->bits.BdSoftwareRst; 
}

void BackupDomainControlRegister::SetBdSoftwareRst(bool val)
{
	Reg()->bits.BdSoftwareRst = val; 
}

}
}
}
}
