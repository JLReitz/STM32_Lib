#include "Apb1PeripheralReset2Register.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb1PeripheralReset2Register::Apb1PeripheralReset2Register(union RccApb1PeripheralReset2Reg* const regPtr)
	: RegisterInterface<union RccApb1PeripheralReset2Reg>(regPtr)
{
}

bool Apb1PeripheralReset2Register::GetCrsBlockRst() const
{
	return Reg()->bits.CrsBlockRst; 
}

void Apb1PeripheralReset2Register::SetCrsBlockRst(bool val)
{
	Reg()->bits.CrsBlockRst = val; 
}

bool Apb1PeripheralReset2Register::GetSwpmiBlockRst() const
{
	return Reg()->bits.SwpmiBlockRst; 
}

void Apb1PeripheralReset2Register::SetSwpmiBlockRst(bool val)
{
	Reg()->bits.SwpmiBlockRst = val; 
}

bool Apb1PeripheralReset2Register::GetOpampBlockRst() const
{
	return Reg()->bits.OpampBlockRst; 
}

void Apb1PeripheralReset2Register::SetOpampBlockRst(bool val)
{
	Reg()->bits.OpampBlockRst = val; 
}

bool Apb1PeripheralReset2Register::GetMdiosBlockRst() const
{
	return Reg()->bits.MdiosBlockRst; 
}

void Apb1PeripheralReset2Register::SetMdiosBlockRst(bool val)
{
	Reg()->bits.MdiosBlockRst = val; 
}

bool Apb1PeripheralReset2Register::GetFdCanBlockRst() const
{
	return Reg()->bits.FdCanBlockRst; 
}

void Apb1PeripheralReset2Register::SetFdCanBlockRst(bool val)
{
	Reg()->bits.FdCanBlockRst = val; 
}

}
}
}
}
