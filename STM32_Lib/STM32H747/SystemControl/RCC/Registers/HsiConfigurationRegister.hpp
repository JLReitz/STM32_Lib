#ifndef HSICONFIGURATION_HPP_
#define HSICONFIGURATION_HPP_

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

class HsiConfigurationRegister : public stm32::intf::RegisterInterface<union RccHsiConfigurationReg>
{
public:

	HsiConfigurationRegister(union RccHsiConfigurationReg* const regPtr);

	uint16_t GetHsiCal() const;
	void SetHsiCal(uint16_t val);

	uint8_t GetHsiTrim() const;
	void SetHsiTrim(uint8_t val);
};

}
}
}
}

#endif
