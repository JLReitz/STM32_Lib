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

class Ahb3ClockRegister : public stm32::intf::RegisterInterface<union RccAhb3ClockReg>
{
public:

	Ahb3ClockRegister(union RccAhb3ClockReg* const regPtr);

	bool GetMdmaPClkEn() const;
	void SetMdmaPClkEn(bool val);

	bool GetDma2DPClkEn() const;
	void SetDma2DPClkEn(bool val);

	bool GetJpegPClkEn() const;
	void SetJpegPClkEn(bool val);

	bool GetD1FlashIntfEn() const;
	void SetD1FlashIntfEn(bool val);

	bool GetFmcPClkEn() const;
	void SetFmcPClkEn(bool val);

	bool GetQuadSpiClkEn() const;
	void SetQuadSpiClkEn(bool val);

	bool GetSdmmc1ClkEn() const;
	void SetSdmmc1ClkEn(bool val);

	bool GetD1Dtcm1BlockEn() const;
	void SetD1Dtcm1BlockEn(bool val);

	bool GetD1Dtcm2BlockEn() const;
	void SetD1Dtcm2BlockEn(bool val);

	bool GetD1Itcm1BlockEn() const;
	void SetD1Itcm1BlockEn(bool val);

	bool GetAxisRamBlockEn() const;
	void SetAxisRamBlockEn(bool val);
};

}
}
}
}

