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

class Ahb4PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccAhb4PeripheralResetReg>
{
public:

	Ahb4PeripheralResetRegister(union RccAhb4PeripheralResetReg* const regPtr);

	bool GetGpioABlockRst() const;
	void SetGpioABlockRst(bool val);

	bool GetGpioBBlockRst() const;
	void SetGpioBBlockRst(bool val);

	bool GetGpioCBlockRst() const;
	void SetGpioCBlockRst(bool val);

	bool GetGpioDBlockRst() const;
	void SetGpioDBlockRst(bool val);

	bool GetGpioEBlockRst() const;
	void SetGpioEBlockRst(bool val);

	bool GetGpioFBlockRst() const;
	void SetGpioFBlockRst(bool val);

	bool GetGpioGBlockRst() const;
	void SetGpioGBlockRst(bool val);

	bool GetGpioHBlockRst() const;
	void SetGpioHBlockRst(bool val);

	bool GetGpioIBlockRst() const;
	void SetGpioIBlockRst(bool val);

	bool GetGpioJBlockRst() const;
	void SetGpioJBlockRst(bool val);

	bool GetGpioKBlockRst() const;
	void SetGpioKBlockRst(bool val);

	bool GetCrcBlockRst() const;
	void SetCrcBlockRst(bool val);

	bool GetBdmaBlockRst() const;
	void SetBdmaBlockRst(bool val);

	bool GetAdc3BlockRst() const;
	void SetAdc3BlockRst(bool val);

	bool GetHsemBlockRst() const;
	void SetHsemBlockRst(bool val);
};

}
}
}
}

