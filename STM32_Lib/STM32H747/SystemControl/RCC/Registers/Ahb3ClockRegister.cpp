#include "Ahb3ClockRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb3ClockRegister::Ahb3ClockRegister(union RccAhb3ClockReg* const regPtr)
	: RegisterInterface<union RccAhb3ClockReg>(regPtr)
{
}

bool Ahb3ClockRegister::GetMdmaPClkEn() const
{
	return Reg()->bits.MdmaPClkEn; 
}

void Ahb3ClockRegister::SetMdmaPClkEn(bool val)
{
	Reg()->bits.MdmaPClkEn = val; 
}

bool Ahb3ClockRegister::GetDma2DPClkEn() const
{
	return Reg()->bits.Dma2DPClkEn; 
}

void Ahb3ClockRegister::SetDma2DPClkEn(bool val)
{
	Reg()->bits.Dma2DPClkEn = val; 
}

bool Ahb3ClockRegister::GetJpegPClkEn() const
{
	return Reg()->bits.JpegPClkEn; 
}

void Ahb3ClockRegister::SetJpegPClkEn(bool val)
{
	Reg()->bits.JpegPClkEn = val; 
}

bool Ahb3ClockRegister::GetD1FlashIntfEn() const
{
	return Reg()->bits.D1FlashIntfEn; 
}

void Ahb3ClockRegister::SetD1FlashIntfEn(bool val)
{
	Reg()->bits.D1FlashIntfEn = val; 
}

bool Ahb3ClockRegister::GetFmcPClkEn() const
{
	return Reg()->bits.FmcPClkEn; 
}

void Ahb3ClockRegister::SetFmcPClkEn(bool val)
{
	Reg()->bits.FmcPClkEn = val; 
}

bool Ahb3ClockRegister::GetQuadSpiClkEn() const
{
	return Reg()->bits.QuadSpiClkEn; 
}

void Ahb3ClockRegister::SetQuadSpiClkEn(bool val)
{
	Reg()->bits.QuadSpiClkEn = val; 
}

bool Ahb3ClockRegister::GetSdmmc1ClkEn() const
{
	return Reg()->bits.Sdmmc1ClkEn; 
}

void Ahb3ClockRegister::SetSdmmc1ClkEn(bool val)
{
	Reg()->bits.Sdmmc1ClkEn = val; 
}

bool Ahb3ClockRegister::GetD1Dtcm1BlockEn() const
{
	return Reg()->bits.D1Dtcm1BlockEn; 
}

void Ahb3ClockRegister::SetD1Dtcm1BlockEn(bool val)
{
	Reg()->bits.D1Dtcm1BlockEn = val; 
}

bool Ahb3ClockRegister::GetD1Dtcm2BlockEn() const
{
	return Reg()->bits.D1Dtcm2BlockEn; 
}

void Ahb3ClockRegister::SetD1Dtcm2BlockEn(bool val)
{
	Reg()->bits.D1Dtcm2BlockEn = val; 
}

bool Ahb3ClockRegister::GetD1Itcm1BlockEn() const
{
	return Reg()->bits.D1Itcm1BlockEn; 
}

void Ahb3ClockRegister::SetD1Itcm1BlockEn(bool val)
{
	Reg()->bits.D1Itcm1BlockEn = val; 
}

bool Ahb3ClockRegister::GetAxisRamBlockEn() const
{
	return Reg()->bits.AxisRamBlockEn; 
}

void Ahb3ClockRegister::SetAxisRamBlockEn(bool val)
{
	Reg()->bits.AxisRamBlockEn = val; 
}

}
}
}
}
