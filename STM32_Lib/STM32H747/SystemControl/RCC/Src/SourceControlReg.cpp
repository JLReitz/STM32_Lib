#include "../Include/SourceControlReg.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

SourceControlReg::SourceControlReg(union SourceControl_Reg* const regPtr)
	: RegisterInterface<union SourceControl_Reg>(regPtr)
{
}

bool SourceControlReg::GetHsiOn() const
{
	return Reg()->bits.HsiOn; 
}

void SourceControlReg::SetHsiOn(bool val)
{
	Reg()->bits.HsiOn = val; 
}

bool SourceControlReg::GetHsiKerOn() const
{
	return Reg()->bits.HsiKerOn; 
}

void SourceControlReg::SetHsiKerOn(bool val)
{
	Reg()->bits.HsiKerOn = val; 
}

bool SourceControlReg::GetHsiReady() const
{
	return Reg()->bits.HsiReady; 
}

void SourceControlReg::SetHsiReady(bool val)
{
	Reg()->bits.HsiReady = val; 
}

uint8_t SourceControlReg::GetHsiDiv() const
{
	return Reg()->bits.HsiDiv; 
}

void SourceControlReg::SetHsiDiv(uint8_t val)
{
	Reg()->bits.HsiDiv = val; 
}

bool SourceControlReg::GetHsiDivFlag() const
{
	return Reg()->bits.HsiDivFlag; 
}

void SourceControlReg::SetHsiDivFlag(bool val)
{
	Reg()->bits.HsiDivFlag = val; 
}

bool SourceControlReg::GetCsiOn() const
{
	return Reg()->bits.CsiOn; 
}

void SourceControlReg::SetCsiOn(bool val)
{
	Reg()->bits.CsiOn = val; 
}

bool SourceControlReg::GetCsiReady() const
{
	return Reg()->bits.CsiReady; 
}

void SourceControlReg::SetCsiReady(bool val)
{
	Reg()->bits.CsiReady = val; 
}

bool SourceControlReg::GetCsiKerOn() const
{
	return Reg()->bits.CsiKerOn; 
}

void SourceControlReg::SetCsiKerOn(bool val)
{
	Reg()->bits.CsiKerOn = val; 
}

bool SourceControlReg::GetHsi48On() const
{
	return Reg()->bits.Hsi48On; 
}

void SourceControlReg::SetHsi48On(bool val)
{
	Reg()->bits.Hsi48On = val; 
}

bool SourceControlReg::GetHsi48Ready() const
{
	return Reg()->bits.Hsi48Ready; 
}

void SourceControlReg::SetHsi48Ready(bool val)
{
	Reg()->bits.Hsi48Ready = val; 
}

bool SourceControlReg::GetD1ClockReady() const
{
	return Reg()->bits.D1ClockReady; 
}

void SourceControlReg::SetD1ClockReady(bool val)
{
	Reg()->bits.D1ClockReady = val; 
}

bool SourceControlReg::GetD2ClockReady() const
{
	return Reg()->bits.D2ClockReady; 
}

void SourceControlReg::SetD2ClockReady(bool val)
{
	Reg()->bits.D2ClockReady = val; 
}

bool SourceControlReg::GetHseOn() const
{
	return Reg()->bits.HseOn; 
}

void SourceControlReg::SetHseOn(bool val)
{
	Reg()->bits.HseOn = val; 
}

bool SourceControlReg::GetHseReady() const
{
	return Reg()->bits.HseReady; 
}

void SourceControlReg::SetHseReady(bool val)
{
	Reg()->bits.HseReady = val; 
}

bool SourceControlReg::GetHseBypass() const
{
	return Reg()->bits.HseBypass; 
}

void SourceControlReg::SetHseBypass(bool val)
{
	Reg()->bits.HseBypass = val; 
}

bool SourceControlReg::GetHseCssOn() const
{
	return Reg()->bits.HseCssOn; 
}

void SourceControlReg::SetHseCssOn(bool val)
{
	Reg()->bits.HseCssOn = val; 
}

bool SourceControlReg::GetPll1On() const
{
	return Reg()->bits.Pll1On; 
}

void SourceControlReg::SetPll1On(bool val)
{
	Reg()->bits.Pll1On = val; 
}

bool SourceControlReg::GetPll1Ready() const
{
	return Reg()->bits.Pll1Ready; 
}

void SourceControlReg::SetPll1Ready(bool val)
{
	Reg()->bits.Pll1Ready = val; 
}

bool SourceControlReg::GetPll2On() const
{
	return Reg()->bits.Pll2On; 
}

void SourceControlReg::SetPll2On(bool val)
{
	Reg()->bits.Pll2On = val; 
}

bool SourceControlReg::GetPll2Ready() const
{
	return Reg()->bits.Pll2Ready; 
}

void SourceControlReg::SetPll2Ready(bool val)
{
	Reg()->bits.Pll2Ready = val; 
}

bool SourceControlReg::GetPll3On() const
{
	return Reg()->bits.Pll3On; 
}

void SourceControlReg::SetPll3On(bool val)
{
	Reg()->bits.Pll3On = val; 
}

bool SourceControlReg::GetPll3Ready() const
{
	return Reg()->bits.Pll3Ready; 
}

void SourceControlReg::SetPll3Ready(bool val)
{
	Reg()->bits.Pll3Ready = val; 
}

}
}
}
}
