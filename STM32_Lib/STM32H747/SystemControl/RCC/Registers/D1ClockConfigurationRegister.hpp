#ifndef D1CLOCKCONFIGURATION_HPP_
#define D1CLOCKCONFIGURATION_HPP_

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

class D1ClockConfigurationRegister : public stm32::intf::RegisterInterface<union RccD1ClockConfigurationReg>
{
public:

	D1ClockConfigurationRegister(union RccD1ClockConfigurationReg* const regPtr);

	uint8_t GetAhbPrescale() const;
	void SetAhbPrescale(uint8_t val);

	uint8_t GetApb3Prescale() const;
	void SetApb3Prescale(uint8_t val);

	uint8_t GetCorePrescale() const;
	void SetCorePrescale(uint8_t val);
};

}
}
}
}

#endif
