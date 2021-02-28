#include "Ahb3ResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb3ResetRegister::Ahb3ResetRegister(union RccAhb3ResetReg* const regPtr)
	: RegisterInterface<union RccAhb3ResetReg>(regPtr)
{
}

bool Ahb3ResetRegister::GetMdmaBlockRst() const
{
	return Reg()->bits.MdmaBlockRst; 
}

void Ahb3ResetRegister::SetMdmaBlockRst(bool val)
{
	Reg()->bits.MdmaBlockRst = val; 
}

bool Ahb3ResetRegister::GetDma2DBlockRst() const
{
	return Reg()->bits.Dma2DBlockRst; 
}

void Ahb3ResetRegister::SetDma2DBlockRst(bool val)
{
	Reg()->bits.Dma2DBlockRst = val; 
}

bool Ahb3ResetRegister::GetJpgBlockRst() const
{
	return Reg()->bits.JpgBlockRst; 
}

void Ahb3ResetRegister::SetJpgBlockRst(bool val)
{
	Reg()->bits.JpgBlockRst = val; 
}

bool Ahb3ResetRegister::GetFmcBlockRst() const
{
	return Reg()->bits.FmcBlockRst; 
}

void Ahb3ResetRegister::SetFmcBlockRst(bool val)
{
	Reg()->bits.FmcBlockRst = val; 
}

bool Ahb3ResetRegister::GetQuadSpiBlockRst() const
{
	return Reg()->bits.QuadSpiBlockRst; 
}

void Ahb3ResetRegister::SetQuadSpiBlockRst(bool val)
{
	Reg()->bits.QuadSpiBlockRst = val; 
}

bool Ahb3ResetRegister::GetSdmmc1BlockRst() const
{
	return Reg()->bits.Sdmmc1BlockRst; 
}

void Ahb3ResetRegister::SetSdmmc1BlockRst(bool val)
{
	Reg()->bits.Sdmmc1BlockRst = val; 
}

}
}
}
}
