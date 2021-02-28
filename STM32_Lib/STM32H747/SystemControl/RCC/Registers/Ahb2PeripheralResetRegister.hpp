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

class Ahb2PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccAhb2PeripheralResetReg>
{
public:

	Ahb2PeripheralResetRegister(union RccAhb2PeripheralResetReg* const regPtr);

	bool GetCamitfBlockRst() const;
	void SetCamitfBlockRst(bool val);

	bool GetCryptBlockRst() const;
	void SetCryptBlockRst(bool val);

	bool GetHashBlovkRst() const;
	void SetHashBlovkRst(bool val);

	bool GetRngBlockRst() const;
	void SetRngBlockRst(bool val);

	bool GetSdmmc2BlockRst() const;
	void SetSdmmc2BlockRst(bool val);
};

}
}
}
}

