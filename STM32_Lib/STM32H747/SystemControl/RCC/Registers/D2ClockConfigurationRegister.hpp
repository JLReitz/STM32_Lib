#ifndef D2CLOCKCONFIGURATION_HPP_
#define D2CLOCKCONFIGURATION_HPP_

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

class D2ClockConfigurationRegister : public stm32::intf::RegisterInterface<union RccD2ClockConfigurationReg>
{
public:

	D2ClockConfigurationRegister(union RccD2ClockConfigurationReg* const regPtr);

	uint8_t GetApb1Prescale() const;
	void SetApb1Prescale(uint8_t val);

	uint8_t GetApb2Prescale() const;
	void SetApb2Prescale(uint8_t val);

};

}
}
}
}

#endif
