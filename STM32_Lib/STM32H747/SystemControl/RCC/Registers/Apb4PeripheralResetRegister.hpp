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

class Apb4PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccApb4PeripheralResetReg>
{
public:

	Apb4PeripheralResetRegister(union RccApb4PeripheralResetReg* const regPtr);

	bool GetSysConfigBlockRst() const;
	void SetSysConfigBlockRst(bool val);

	bool GetLpUart1BlockRst() const;
	void SetLpUart1BlockRst(bool val);

	bool GetSpi6BlockRst() const;
	void SetSpi6BlockRst(bool val);

	bool GetI2c4Rst() const;
	void SetI2c4Rst(bool val);

	bool GetLpTimer2BlockRst() const;
	void SetLpTimer2BlockRst(bool val);

	bool GetLpTimer3BlockRst() const;
	void SetLpTimer3BlockRst(bool val);

	bool GetLpTimer4BlockRst() const;
	void SetLpTimer4BlockRst(bool val);

	bool GetLpTimer5BlockRst() const;
	void SetLpTimer5BlockRst(bool val);

	bool GetComp12BlockRst() const;
	void SetComp12BlockRst(bool val);

	bool GetVrefBlockRst() const;
	void SetVrefBlockRst(bool val);

	bool GetSai4BlockRst() const;
	void SetSai4BlockRst(bool val);
};

}
}
}
}

