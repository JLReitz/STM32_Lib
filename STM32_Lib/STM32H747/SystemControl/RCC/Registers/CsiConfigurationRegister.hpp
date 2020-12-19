#ifndef CSICONFIGURATION_HPP_
#define CSICONFIGURATION_HPP_

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

class CsiConfigurationRegister : public stm32::intf::RegisterInterface<union RccCsiConfigurationReg>
{
public:

	CsiConfigurationRegister(union RccCsiConfigurationReg* const regPtr);

	uint16_t GetCsiCal() const;
	void SetCsiCal(uint16_t val);

	uint8_t GetCsiTrim() const;
	void SetCsiTrim(uint8_t val);

};

}
}
}
}

#endif
