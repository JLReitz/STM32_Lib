#ifndef SOURCECONTROL_HPP_
#define SOURCECONTROL_HPP_

#include "../Registers/Registers.h"

#include <Common/Interfaces/RegisterInterface.hpp>

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

class SourceControlReg : public stm32::intf::RegisterInterface<union SourceControl_Reg>
{
public:

	SourceControlReg(union SourceControl_Reg* const regPtr);

	bool GetHsiOn() const;
	void SetHsiOn(bool val);

	bool GetHsiKerOn() const;
	void SetHsiKerOn(bool val);

	bool GetHsiReady() const;
	void SetHsiReady(bool val);

	uint8_t GetHsiDiv() const;
	void SetHsiDiv(uint8_t val);

	bool GetHsiDivFlag() const;
	void SetHsiDivFlag(bool val);

	bool GetCsiOn() const;
	void SetCsiOn(bool val);

	bool GetCsiReady() const;
	void SetCsiReady(bool val);

	bool GetCsiKerOn() const;
	void SetCsiKerOn(bool val);

	bool GetHsi48On() const;
	void SetHsi48On(bool val);

	bool GetHsi48Ready() const;
	void SetHsi48Ready(bool val);

	bool GetD1ClockReady() const;
	void SetD1ClockReady(bool val);

	bool GetD2ClockReady() const;
	void SetD2ClockReady(bool val);

	bool GetHseOn() const;
	void SetHseOn(bool val);

	bool GetHseReady() const;
	void SetHseReady(bool val);

	bool GetHseBypass() const;
	void SetHseBypass(bool val);

	bool GetHseCssOn() const;
	void SetHseCssOn(bool val);

	bool GetPll1On() const;
	void SetPll1On(bool val);

	bool GetPll1Ready() const;
	void SetPll1Ready(bool val);

	bool GetPll2On() const;
	void SetPll2On(bool val);

	bool GetPll2Ready() const;
	void SetPll2Ready(bool val);

	bool GetPll3On() const;
	void SetPll3On(bool val);

	bool GetPll3Ready() const;
	void SetPll3Ready(bool val);

};

}
}
}
}

#endif

