#include "Apb1Clock2Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb1Clock2Register::Apb1Clock2Register(union RccApb1Clock2Reg* const regPtr)
	: RegisterInterface<union RccApb1Clock2Reg>(regPtr)
{
}

bool Apb1Clock2Register::GetCrsPClkEn() const
{
	return Reg()->bits.CrsPClkEn; 
}

void Apb1Clock2Register::SetCrsPClkEn(bool val)
{
	Reg()->bits.CrsPClkEn = val; 
}

bool Apb1Clock2Register::GetPwpmiPClkEn() const
{
	return Reg()->bits.PwpmiPClkEn; 
}

void Apb1Clock2Register::SetPwpmiPClkEn(bool val)
{
	Reg()->bits.PwpmiPClkEn = val; 
}

bool Apb1Clock2Register::GetOpampPClkEn() const
{
	return Reg()->bits.OpampPClkEn; 
}

void Apb1Clock2Register::SetOpampPClkEn(bool val)
{
	Reg()->bits.OpampPClkEn = val; 
}

bool Apb1Clock2Register::GetMdiosPClkEn() const
{
	return Reg()->bits.MdiosPClkEn; 
}

void Apb1Clock2Register::SetMdiosPClkEn(bool val)
{
	Reg()->bits.MdiosPClkEn = val; 
}

bool Apb1Clock2Register::GetFdCanPClkEn() const
{
	return Reg()->bits.FdCanPClkEn; 
}

void Apb1Clock2Register::SetFdCanPClkEn(bool val)
{
	Reg()->bits.FdCanPClkEn = val; 
}

}
}
}
}
