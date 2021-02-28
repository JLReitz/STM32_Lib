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

class Apb1PeripheralReset2Register : public stm32::intf::RegisterInterface<union RccApb1PeripheralReset2Reg>
{
public:

	Apb1PeripheralReset2Register(union RccApb1PeripheralReset2Reg* const regPtr);

	bool GetCrsBlockRst() const;
	void SetCrsBlockRst(bool val);

	bool GetSwpmiBlockRst() const;
	void SetSwpmiBlockRst(bool val);

	bool GetOpampBlockRst() const;
	void SetOpampBlockRst(bool val);

	bool GetMdiosBlockRst() const;
	void SetMdiosBlockRst(bool val);

	bool GetFdCanBlockRst() const;
	void SetFdCanBlockRst(bool val);
};

}
}
}
}

