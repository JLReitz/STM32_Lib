#pragma once

#include "../Registers/Registers.h"

#include <Common/Interfaces/RegisterInterface.hpp>

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

class Apb3PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccApb3PeripheralResetReg>
{
public:

	Apb3PeripheralResetRegister(union RccApb3PeripheralResetReg* const regPtr);

	bool GetLtdcBlockRst() const;
	void SetLtdcBlockRst(bool val);

	bool GetDsiBlockRst() const;
	void SetDsiBlockRst(bool val);
};

}
}
}
}

