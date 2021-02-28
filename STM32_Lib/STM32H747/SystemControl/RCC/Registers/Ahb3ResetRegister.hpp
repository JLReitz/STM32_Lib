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

class Ahb3ResetRegister : public stm32::intf::RegisterInterface<union RccAhb3ResetReg>
{
public:

	Ahb3ResetRegister(union RccAhb3ResetReg* const regPtr);

	bool GetMdmaBlockRst() const;
	void SetMdmaBlockRst(bool val);

	bool GetDma2DBlockRst() const;
	void SetDma2DBlockRst(bool val);

	bool GetJpgBlockRst() const;
	void SetJpgBlockRst(bool val);

	bool GetFmcBlockRst() const;
	void SetFmcBlockRst(bool val);

	bool GetQuadSpiBlockRst() const;
	void SetQuadSpiBlockRst(bool val);

	bool GetSdmmc1BlockRst() const;
	void SetSdmmc1BlockRst(bool val);
};

}
}
}
}

