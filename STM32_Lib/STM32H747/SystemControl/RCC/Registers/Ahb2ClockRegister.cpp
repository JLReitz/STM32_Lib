#include "Ahb2ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb2ClockRegister::Ahb2ClockRegister(union RccAhb2ClockReg* const regPtr)
	: RegisterInterface<union RccAhb2ClockReg>(regPtr)
{
}

bool Ahb2ClockRegister::GetDcmiPClkEn() const
{
	return Reg()->bits.DcmiPClkEn; 
}

void Ahb2ClockRegister::SetDcmiPClkEn(bool val)
{
	Reg()->bits.DcmiPClkEn = val; 
}

bool Ahb2ClockRegister::GetCryptPClkEn() const
{
	return Reg()->bits.CryptPClkEn; 
}

void Ahb2ClockRegister::SetCryptPClkEn(bool val)
{
	Reg()->bits.CryptPClkEn = val; 
}

bool Ahb2ClockRegister::GetHashPClkEn() const
{
	return Reg()->bits.HashPClkEn; 
}

void Ahb2ClockRegister::SetHashPClkEn(bool val)
{
	Reg()->bits.HashPClkEn = val; 
}

bool Ahb2ClockRegister::GetRngPClkEn() const
{
	return Reg()->bits.RngPClkEn; 
}

void Ahb2ClockRegister::SetRngPClkEn(bool val)
{
	Reg()->bits.RngPClkEn = val; 
}

bool Ahb2ClockRegister::GetSdmmc2ClkEn() const
{
	return Reg()->bits.Sdmmc2ClkEn; 
}

void Ahb2ClockRegister::SetSdmmc2ClkEn(bool val)
{
	Reg()->bits.Sdmmc2ClkEn = val; 
}

bool Ahb2ClockRegister::GetSram1BlockEn() const
{
	return Reg()->bits.Sram1BlockEn; 
}

void Ahb2ClockRegister::SetSram1BlockEn(bool val)
{
	Reg()->bits.Sram1BlockEn = val; 
}

bool Ahb2ClockRegister::GetSram2BlockEn() const
{
	return Reg()->bits.Sram2BlockEn; 
}

void Ahb2ClockRegister::SetSram2BlockEn(bool val)
{
	Reg()->bits.Sram2BlockEn = val; 
}

bool Ahb2ClockRegister::GetSram3BlockEn() const
{
	return Reg()->bits.Sram3BlockEn; 
}

void Ahb2ClockRegister::SetSram3BlockEn(bool val)
{
	Reg()->bits.Sram3BlockEn = val; 
}

}
}
}
}
