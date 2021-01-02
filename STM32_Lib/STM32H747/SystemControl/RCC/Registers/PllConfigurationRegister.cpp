#include "PllConfigurationRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

PllConfigurationRegister::PllConfigurationRegister(union RccPllConfigurationReg* const regPtr)
	: RegisterInterface<union RccPllConfigurationReg>(regPtr)
{
}

bool PllConfigurationRegister::GetPll1FracEnable() const
{
	return Reg()->bits.Pll1FracEnable; 
}

void PllConfigurationRegister::SetPll1FracEnable(bool val)
{
	Reg()->bits.Pll1FracEnable = val; 
}

bool PllConfigurationRegister::GetPll1VcoSel() const
{
	return Reg()->bits.Pll1VcoSel; 
}

void PllConfigurationRegister::SetPll1VcoSel(bool val)
{
	Reg()->bits.Pll1VcoSel = val; 
}

uint8_t PllConfigurationRegister::GetPll1InputFreqRange() const
{
	return Reg()->bits.Pll1InputFreqRange; 
}

void PllConfigurationRegister::SetPll1InputFreqRange(uint8_t val)
{
	Reg()->bits.Pll1InputFreqRange = val; 
}

bool PllConfigurationRegister::GetPll2FracEnable() const
{
	return Reg()->bits.Pll2FracEnable; 
}

void PllConfigurationRegister::SetPll2FracEnable(bool val)
{
	Reg()->bits.Pll2FracEnable = val; 
}

bool PllConfigurationRegister::GetPll2VcoSel() const
{
	return Reg()->bits.Pll2VcoSel; 
}

void PllConfigurationRegister::SetPll2VcoSel(bool val)
{
	Reg()->bits.Pll2VcoSel = val; 
}

uint8_t PllConfigurationRegister::GetPll2InputFreqRange() const
{
	return Reg()->bits.Pll2InputFreqRange; 
}

void PllConfigurationRegister::SetPll2InputFreqRange(uint8_t val)
{
	Reg()->bits.Pll2InputFreqRange = val; 
}

bool PllConfigurationRegister::GetPll3FracEnable() const
{
	return Reg()->bits.Pll3FracEnable; 
}

void PllConfigurationRegister::SetPll3FracEnable(bool val)
{
	Reg()->bits.Pll3FracEnable = val; 
}

bool PllConfigurationRegister::GetPll3VcoSel() const
{
	return Reg()->bits.Pll3VcoSel; 
}

void PllConfigurationRegister::SetPll3VcoSel(bool val)
{
	Reg()->bits.Pll3VcoSel = val; 
}

uint8_t PllConfigurationRegister::GetPll3InputFreqRange() const
{
	return Reg()->bits.Pll3InputFreqRange; 
}

void PllConfigurationRegister::SetPll3InputFreqRange(uint8_t val)
{
	Reg()->bits.Pll3InputFreqRange = val; 
}

bool PllConfigurationRegister::GetPll1DivPEnable() const
{
	return Reg()->bits.Pll1DivPEnable; 
}

void PllConfigurationRegister::SetPll1DivPEnable(bool val)
{
	Reg()->bits.Pll1DivPEnable = val; 
}

bool PllConfigurationRegister::GetPll1DivQEnable() const
{
	return Reg()->bits.Pll1DivQEnable; 
}

void PllConfigurationRegister::SetPll1DivQEnable(bool val)
{
	Reg()->bits.Pll1DivQEnable = val; 
}

bool PllConfigurationRegister::GetPll1DivREnable() const
{
	return Reg()->bits.Pll1DivREnable; 
}

void PllConfigurationRegister::SetPll1DivREnable(bool val)
{
	Reg()->bits.Pll1DivREnable = val; 
}

bool PllConfigurationRegister::GetPll2DivPEnable() const
{
	return Reg()->bits.Pll2DivPEnable; 
}

void PllConfigurationRegister::SetPll2DivPEnable(bool val)
{
	Reg()->bits.Pll2DivPEnable = val; 
}

bool PllConfigurationRegister::GetPll2DivQEnable() const
{
	return Reg()->bits.Pll2DivQEnable; 
}

void PllConfigurationRegister::SetPll2DivQEnable(bool val)
{
	Reg()->bits.Pll2DivQEnable = val; 
}

bool PllConfigurationRegister::GetPll2DivREnable() const
{
	return Reg()->bits.Pll2DivREnable; 
}

void PllConfigurationRegister::SetPll2DivREnable(bool val)
{
	Reg()->bits.Pll2DivREnable = val; 
}

bool PllConfigurationRegister::GetPll3DivPEnable() const
{
	return Reg()->bits.Pll3DivPEnable; 
}

void PllConfigurationRegister::SetPll3DivPEnable(bool val)
{
	Reg()->bits.Pll3DivPEnable = val; 
}

bool PllConfigurationRegister::GetPll3DivQEnable() const
{
	return Reg()->bits.Pll3DivQEnable; 
}

void PllConfigurationRegister::SetPll3DivQEnable(bool val)
{
	Reg()->bits.Pll3DivQEnable = val; 
}

bool PllConfigurationRegister::GetPll3DivREnable() const
{
	return Reg()->bits.Pll3DivREnable; 
}

void PllConfigurationRegister::SetPll3DivREnable(bool val)
{
	Reg()->bits.Pll3DivREnable = val; 
}

}
}
}
}
