#include "Ahb2PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Ahb2PeripheralResetRegister::Ahb2PeripheralResetRegister(union RccAhb2PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccAhb2PeripheralResetReg>(regPtr)
{
}

bool Ahb2PeripheralResetRegister::GetCamitfBlockRst() const
{
	return Reg()->bits.CamitfBlockRst; 
}

void Ahb2PeripheralResetRegister::SetCamitfBlockRst(bool val)
{
	Reg()->bits.CamitfBlockRst = val; 
}

bool Ahb2PeripheralResetRegister::GetCryptBlockRst() const
{
	return Reg()->bits.CryptBlockRst; 
}

void Ahb2PeripheralResetRegister::SetCryptBlockRst(bool val)
{
	Reg()->bits.CryptBlockRst = val; 
}

bool Ahb2PeripheralResetRegister::GetHashBlovkRst() const
{
	return Reg()->bits.HashBlovkRst; 
}

void Ahb2PeripheralResetRegister::SetHashBlovkRst(bool val)
{
	Reg()->bits.HashBlovkRst = val; 
}

bool Ahb2PeripheralResetRegister::GetRngBlockRst() const
{
	return Reg()->bits.RngBlockRst; 
}

void Ahb2PeripheralResetRegister::SetRngBlockRst(bool val)
{
	Reg()->bits.RngBlockRst = val; 
}

bool Ahb2PeripheralResetRegister::GetSdmmc2BlockRst() const
{
	return Reg()->bits.Sdmmc2BlockRst; 
}

void Ahb2PeripheralResetRegister::SetSdmmc2BlockRst(bool val)
{
	Reg()->bits.Sdmmc2BlockRst = val; 
}

}
}
}
}
