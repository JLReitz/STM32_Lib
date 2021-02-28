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

class Apb2PeripheralResetRegister : public stm32::intf::RegisterInterface<union RccApb2PeripheralResetReg>
{
public:

	Apb2PeripheralResetRegister(union RccApb2PeripheralResetReg* const regPtr);

	bool GetTimer1BlockRst() const;
	void SetTimer1BlockRst(bool val);

	bool GetTimer8BlockRst() const;
	void SetTimer8BlockRst(bool val);

	bool GetUsart1BlockRst() const;
	void SetUsart1BlockRst(bool val);

	bool GetUsart6BlockRst() const;
	void SetUsart6BlockRst(bool val);

	bool GetSpi1BlockRst() const;
	void SetSpi1BlockRst(bool val);

	bool GetSpi4BlockRst() const;
	void SetSpi4BlockRst(bool val);

	bool GetTimer15BlockRst() const;
	void SetTimer15BlockRst(bool val);

	bool GetTimer16BlockRst() const;
	void SetTimer16BlockRst(bool val);

	bool GetTimer17BlockRst() const;
	void SetTimer17BlockRst(bool val);

	bool GetSpi5BlockRst() const;
	void SetSpi5BlockRst(bool val);

	bool GetSai1BlockRst() const;
	void SetSai1BlockRst(bool val);

	bool GetSai2BlockRst() const;
	void SetSai2BlockRst(bool val);

	bool GetSai3BlockRst() const;
	void SetSai3BlockRst(bool val);

	bool GetDfsdm1BlockRst() const;
	void SetDfsdm1BlockRst(bool val);

	bool GetHrTimerBlockRst() const;
	void SetHrTimerBlockRst(bool val);
};

}
}
}
}

