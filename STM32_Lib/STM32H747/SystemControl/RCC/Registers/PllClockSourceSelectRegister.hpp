#ifndef PLLCLOCKSOURCESELECT_HPP_
#define PLLCLOCKSOURCESELECT_HPP_

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

class PllClockSourceSelectRegister : public stm32::intf::RegisterInterface<union RccPllClockSourceSelectReg>
{
public:

	PllClockSourceSelectRegister(union RccPllClockSourceSelectReg* const regPtr);

	uint8_t GetPllSource() const;
	void SetPllSource(uint8_t val);

	uint8_t GetPll1Prescale() const;
	void SetPll1Prescale(uint8_t val);

	uint8_t GetPll2Prescale() const;
	void SetPll2Prescale(uint8_t val);

	uint8_t GetPll3Prescale() const;
	void SetPll3Prescale(uint8_t val);

};

}
}
}
}

#endif
