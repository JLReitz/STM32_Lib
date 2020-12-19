#ifndef RCCIMPL_HPP_
#define RCCIMPL_HPP_

#include "../Registers/SourceControlRegister.hpp"
#include "../Registers/HsiConfigurationRegister.hpp"
#include "../Registers/ClockRecoveryRcRegister.hpp"
#include "../Registers/CsiConfigurationRegister.hpp"
#include "../Registers/ClockConfigurationRegister.hpp"
#include "../Registers/D1ClockConfigurationRegister.hpp"
#include "../Registers/D2ClockConfigurationRegister.hpp"
#include "../Registers/D3ClockConfigurationRegister.hpp"
#include "../Registers/PllClockSourceSelectRegister.hpp"

namespace stm32
{
namespace sysctrl
{
namespace rcc
{
namespace impl
{

/* ================================================================================================
 *  stm32::sysctrl::rcc::impl::RccImpl
 * ================================================================================================
 *
 * <Enter module description here>
 */
class RccImpl
{
public:

	RccImpl(struct RccRegisterBank* const regs);

protected:

private:

	stm32::sysctrl::rcc::regs::SourceControlRegister mSourceControlReg;
	stm32::sysctrl::rcc::regs::HsiConfigurationRegister mHsiConfigurationReg;
	stm32::sysctrl::rcc::regs::ClockRecoveryRcRegister mClockRecoveryRcReg;
	stm32::sysctrl::rcc::regs::CsiConfigurationRegister mCsiConfigurationReg;
	stm32::sysctrl::rcc::regs::ClockConfigurationRegister mClockConfigurationReg;
	stm32::sysctrl::rcc::regs::D1ClockConfigurationRegister mD1ClockConfigurationReg;
	stm32::sysctrl::rcc::regs::D2ClockConfigurationRegister mD2ClockConfigurationReg;
	stm32::sysctrl::rcc::regs::D3ClockConfigurationRegister mD3ClockConfigurationReg;
	stm32::sysctrl::rcc::regs::PllClockSourceSelectRegister mPllClockSourceSelectReg;
};

}
}
}
}

#endif
