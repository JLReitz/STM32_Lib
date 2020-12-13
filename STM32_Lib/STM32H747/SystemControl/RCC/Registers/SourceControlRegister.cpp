#include "SourceControlRegister.hpp"

namespace Stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

SourceControlRegister::SourceControlRegister(union SourceControlReg* const regPtr)
	: RegisterInterface<union SourceControl_Reg>(regPtr)
{
}

bool SourceControlRegister::GetHsiOn() const
{
	return Reg()->bits.HsiOn; 
}

void SourceControlRegister::SetHsiOn(bool val)
{
	Reg()->bits.HsiOn = val; 
}

bool SourceControlRegister::GetHsiKerOn() const
{
	return Reg()->bits.HsiKerOn; 
}

void SourceControlRegister::SetHsiKerOn(bool val)
{
	Reg()->bits.HsiKerOn = val; 
}

bool SourceControlRegister::GetHsiReady() const
{
	return Reg()->bits.HsiReady; 
}

void SourceControlRegister::SetHsiReady(bool val)
{
	Reg()->bits.HsiReady = val; 
}

uint8_t SourceControlRegister::GetHsiDiv() const
{
	return Reg()->bits.HsiDiv; 
}

void SourceControlRegister::SetHsiDiv(uint8_t val)
{
	Reg()->bits.HsiDiv = val; 
}

bool SourceControlRegister::GetHsiDivFlag() const
{
	return Reg()->bits.HsiDivFlag; 
}

void SourceControlRegister::SetHsiDivFlag(bool val)
{
	Reg()->bits.HsiDivFlag = val; 
}

bool SourceControlRegister::GetCsiOn() const
{
	return Reg()->bits.CsiOn; 
}

void SourceControlRegister::SetCsiOn(bool val)
{
	Reg()->bits.CsiOn = val; 
}

bool SourceControlRegister::GetCsiReady() const
{
	return Reg()->bits.CsiReady; 
}

void SourceControlRegister::SetCsiReady(bool val)
{
	Reg()->bits.CsiReady = val; 
}

bool SourceControlRegister::GetCsiKerOn() const
{
	return Reg()->bits.CsiKerOn; 
}

void SourceControlRegister::SetCsiKerOn(bool val)
{
	Reg()->bits.CsiKerOn = val; 
}

bool SourceControlRegister::GetHsi48On() const
{
	return Reg()->bits.Hsi48On; 
}

void SourceControlRegister::SetHsi48On(bool val)
{
	Reg()->bits.Hsi48On = val; 
}

bool SourceControlRegister::GetHsi48Ready() const
{
	return Reg()->bits.Hsi48Ready; 
}

void SourceControlRegister::SetHsi48Ready(bool val)
{
	Reg()->bits.Hsi48Ready = val; 
}

bool SourceControlRegister::GetD1ClockReady() const
{
	return Reg()->bits.D1ClockReady; 
}

void SourceControlRegister::SetD1ClockReady(bool val)
{
	Reg()->bits.D1ClockReady = val; 
}

bool SourceControlRegister::GetD2ClockReady() const
{
	return Reg()->bits.D2ClockReady; 
}

void SourceControlRegister::SetD2ClockReady(bool val)
{
	Reg()->bits.D2ClockReady = val; 
}

bool SourceControlRegister::GetHseOn() const
{
	return Reg()->bits.HseOn; 
}

void SourceControlRegister::SetHseOn(bool val)
{
	Reg()->bits.HseOn = val; 
}

bool SourceControlRegister::GetHseReady() const
{
	return Reg()->bits.HseReady; 
}

void SourceControlRegister::SetHseReady(bool val)
{
	Reg()->bits.HseReady = val; 
}

bool SourceControlRegister::GetHseBypass() const
{
	return Reg()->bits.HseBypass; 
}

void SourceControlRegister::SetHseBypass(bool val)
{
	Reg()->bits.HseBypass = val; 
}

bool SourceControlRegister::GetHseCssOn() const
{
	return Reg()->bits.HseCssOn; 
}

void SourceControlRegister::SetHseCssOn(bool val)
{
	Reg()->bits.HseCssOn = val; 
}

bool SourceControlRegister::GetPll1On() const
{
	return Reg()->bits.Pll1On; 
}

void SourceControlRegister::SetPll1On(bool val)
{
	Reg()->bits.Pll1On = val; 
}

bool SourceControlRegister::GetPll1Ready() const
{
	return Reg()->bits.Pll1Ready; 
}

void SourceControlRegister::SetPll1Ready(bool val)
{
	Reg()->bits.Pll1Ready = val; 
}

bool SourceControlRegister::GetPll2On() const
{
	return Reg()->bits.Pll2On; 
}

void SourceControlRegister::SetPll2On(bool val)
{
	Reg()->bits.Pll2On = val; 
}

bool SourceControlRegister::GetPll2Ready() const
{
	return Reg()->bits.Pll2Ready; 
}

void SourceControlRegister::SetPll2Ready(bool val)
{
	Reg()->bits.Pll2Ready = val; 
}

bool SourceControlRegister::GetPll3On() const
{
	return Reg()->bits.Pll3On; 
}

void SourceControlRegister::SetPll3On(bool val)
{
	Reg()->bits.Pll3On = val; 
}

bool SourceControlRegister::GetPll3Ready() const
{
	return Reg()->bits.Pll3Ready; 
}

void SourceControlRegister::SetPll3Ready(bool val)
{
	Reg()->bits.Pll3Ready = val; 
}

}
}
}
}
