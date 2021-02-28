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

class Ahb1PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccAhb1PeripheralResetReg>
{
public:

	Ahb1PeripheralResetRegister(union RccAhb1PeripheralResetReg* const regPtr);

	bool GetDma1BlockRst() const;
	void SetDma1BlockRst(bool val);

	bool GetDma2BlockRst() const;
	void SetDma2BlockRst(bool val);

	bool GetAdc12BlockRst() const;
	void SetAdc12BlockRst(bool val);

	bool GetArtBlockRst() const;
	void SetArtBlockRst(bool val);

	bool GetEth1MacBlockRst() const;
	void SetEth1MacBlockRst(bool val);

	bool GetUsb1OtgBlockRst() const;
	void SetUsb1OtgBlockRst(bool val);

	bool GetUsb2OtgBlockRst() const;
	void SetUsb2OtgBlockRst(bool val);
};

}
}
}
}

