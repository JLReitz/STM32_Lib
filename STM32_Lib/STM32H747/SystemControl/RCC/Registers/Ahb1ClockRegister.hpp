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

class Ahb1ClockRegister : public stm32::intf::RegisterInterface<union RccAhb1ClockReg>
{
public:

	Ahb1ClockRegister(union RccAhb1ClockReg* const regPtr);

	bool GetDma1ClkEn() const;
	void SetDma1ClkEn(bool val);

	bool GetDma2ClkEn() const;
	void SetDma2ClkEn(bool val);

	bool GetAdc12PClkEn() const;
	void SetAdc12PClkEn(bool val);

	bool GetArtClkEn() const;
	void SetArtClkEn(bool val);

	bool GetEth1MacClkEn() const;
	void SetEth1MacClkEn(bool val);

	bool GetEth1TxClkEn() const;
	void SetEth1TxClkEn(bool val);

	bool GetEth1RcClkEn() const;
	void SetEth1RcClkEn(bool val);

	bool GetUsb2UlpiPhyClkEn() const;
	void SetUsb2UlpiPhyClkEn(bool val);

	bool GetUsb1OtgPClkEn() const;
	void SetUsb1OtgPClkEn(bool val);

	bool GetUsb1UlpiPhyClkEn() const;
	void SetUsb1UlpiPhyClkEn(bool val);

	bool GetUsb2OtgPClkEn() const;
	void SetUsb2OtgPClkEn(bool val);
};

}
}
}
}

