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

class Apb1PeripheralReset1Register : public stm32::intf::RegisterInterface<union RccApb1PeripheralReset1Reg>
{
public:

	Apb1PeripheralReset1Register(union RccApb1PeripheralReset1Reg* const regPtr);

	bool GetTimer2BlockRst() const;
	void SetTimer2BlockRst(bool val);

	bool GetTimer3BlockRst() const;
	void SetTimer3BlockRst(bool val);

	bool GetTimer4BlockRst() const;
	void SetTimer4BlockRst(bool val);

	bool GetTimer5BlockRst() const;
	void SetTimer5BlockRst(bool val);

	bool GetTimer6BlockRst() const;
	void SetTimer6BlockRst(bool val);

	bool GetTimer7BlockRst() const;
	void SetTimer7BlockRst(bool val);

	bool GetTimer12BlockRst() const;
	void SetTimer12BlockRst(bool val);

	bool GetTimer13BlockRst() const;
	void SetTimer13BlockRst(bool val);

	bool GetTimer14BlockRst() const;
	void SetTimer14BlockRst(bool val);

	bool GetLpTimer1BlockRst() const;
	void SetLpTimer1BlockRst(bool val);

	bool GetSpi2BlockRst() const;
	void SetSpi2BlockRst(bool val);

	bool GetSpi3BlockRst() const;
	void SetSpi3BlockRst(bool val);

	bool GetSpdifRxBlockRst() const;
	void SetSpdifRxBlockRst(bool val);

	bool GetUsart2BlockRst() const;
	void SetUsart2BlockRst(bool val);

	bool GetUsart3BlockRst() const;
	void SetUsart3BlockRst(bool val);

	bool GetUart4BlockRst() const;
	void SetUart4BlockRst(bool val);

	bool GetUart5BlockRst() const;
	void SetUart5BlockRst(bool val);

	bool GetI2c1BlockRst() const;
	void SetI2c1BlockRst(bool val);

	bool GetI2c2BlockRst() const;
	void SetI2c2BlockRst(bool val);

	bool GetI2c3BlockRst() const;
	void SetI2c3BlockRst(bool val);

	bool GetHdmiCecBlockRst() const;
	void SetHdmiCecBlockRst(bool val);

	bool GetDac12BlockRst() const;
	void SetDac12BlockRst(bool val);

	bool GetUart7BlockRst() const;
	void SetUart7BlockRst(bool val);

	bool GetUart8BLockRst() const;
	void SetUart8BLockRst(bool val);
};

}
}
}
}

