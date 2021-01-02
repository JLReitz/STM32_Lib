#ifndef D3CLOCKCONFIGURATION_HPP_
#define D3CLOCKCONFIGURATION_HPP_

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

class D3ClockConfigurationRegister : public stm32::intf::RegisterInterface<union RccD3ClockConfigurationReg>
{
public:

	D3ClockConfigurationRegister(union RccD3ClockConfigurationReg* const regPtr);

	uint8_t GetApb4Prescale() const;
	void SetApb4Prescale(uint8_t val);
};

}
}
}
}

#endif
