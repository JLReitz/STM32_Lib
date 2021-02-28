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

class Apb1Clock2Register : public stm32::intf::RegisterInterface<union RccApb1Clock2Reg>
{
public:

	Apb1Clock2Register(union RccApb1Clock2Reg* const regPtr);

	bool GetCrsPClkEn() const;
	void SetCrsPClkEn(bool val);

	bool GetPwpmiPClkEn() const;
	void SetPwpmiPClkEn(bool val);

	bool GetOpampPClkEn() const;
	void SetOpampPClkEn(bool val);

	bool GetMdiosPClkEn() const;
	void SetMdiosPClkEn(bool val);

	bool GetFdCanPClkEn() const;
	void SetFdCanPClkEn(bool val);
};

}
}
}
}

