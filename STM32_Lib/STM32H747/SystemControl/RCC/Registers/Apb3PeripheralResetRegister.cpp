#include "Apb3PeripheralResetRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

Apb3PeripheralResetRegister::Apb3PeripheralResetRegister(union RccApb3PeripheralResetReg* const regPtr)
	: RegisterInterface<union RccApb3PeripheralResetReg>(regPtr)
{
}

bool Apb3PeripheralResetRegister::GetLtdcBlockRst() const
{
	return Reg()->bits.LtdcBlockRst; 
}

void Apb3PeripheralResetRegister::SetLtdcBlockRst(bool val)
{
	Reg()->bits.LtdcBlockRst = val; 
}

bool Apb3PeripheralResetRegister::GetDsiBlockRst() const
{
	return Reg()->bits.DsiBlockRst; 
}

void Apb3PeripheralResetRegister::SetDsiBlockRst(bool val)
{
	Reg()->bits.DsiBlockRst = val; 
}

}
}
}
}
