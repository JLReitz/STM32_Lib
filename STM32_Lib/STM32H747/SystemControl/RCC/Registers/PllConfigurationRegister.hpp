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

class PllConfigurationRegister : public stm32::intf::RegisterInterface<union RccPllConfigurationReg>
{
public:

	PllConfigurationRegister(union RccPllConfigurationReg* const regPtr);

	bool GetPll1FracEnable() const;
	void SetPll1FracEnable(bool val);

	bool GetPll1VcoSel() const;
	void SetPll1VcoSel(bool val);

	uint8_t GetPll1InputFreqRange() const;
	void SetPll1InputFreqRange(uint8_t val);

	bool GetPll2FracEnable() const;
	void SetPll2FracEnable(bool val);

	bool GetPll2VcoSel() const;
	void SetPll2VcoSel(bool val);

	uint8_t GetPll2InputFreqRange() const;
	void SetPll2InputFreqRange(uint8_t val);

	bool GetPll3FracEnable() const;
	void SetPll3FracEnable(bool val);

	bool GetPll3VcoSel() const;
	void SetPll3VcoSel(bool val);

	uint8_t GetPll3InputFreqRange() const;
	void SetPll3InputFreqRange(uint8_t val);

	bool GetPll1DivPEnable() const;
	void SetPll1DivPEnable(bool val);

	bool GetPll1DivQEnable() const;
	void SetPll1DivQEnable(bool val);

	bool GetPll1DivREnable() const;
	void SetPll1DivREnable(bool val);

	bool GetPll2DivPEnable() const;
	void SetPll2DivPEnable(bool val);

	bool GetPll2DivQEnable() const;
	void SetPll2DivQEnable(bool val);

	bool GetPll2DivREnable() const;
	void SetPll2DivREnable(bool val);

	bool GetPll3DivPEnable() const;
	void SetPll3DivPEnable(bool val);

	bool GetPll3DivQEnable() const;
	void SetPll3DivQEnable(bool val);

	bool GetPll3DivREnable() const;
	void SetPll3DivREnable(bool val);
};

}
}
}
}

