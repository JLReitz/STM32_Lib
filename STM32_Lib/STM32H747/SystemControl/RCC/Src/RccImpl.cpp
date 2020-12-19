#include "../Include/RccImpl.hpp"

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
 *  ---------------------------------------------
 *  Methods
 * ================================================================================================
 */

// Public /////////////////////////////////////////////////////////////////

RccImpl::RccImpl(struct RccRegisterBank* const regs)
:	 mSourceControlReg(&regs->SourceControl), mHsiConfigurationReg(&regs->HsiConfiguration),
	 mClockRecoveryRcReg(&regs->ClockRecoveryRc), mCsiConfigurationReg(&regs->CsiConfiguration),
	 mClockConfigurationReg(&regs->ClockConfiguration), mD1ClockConfigurationReg(&regs->D1ClockConfiguration),
	 mD2ClockConfigurationReg(&regs->D2ClockConfiguration), mD3ClockConfigurationReg(&regs->D3ClockConfiguration),
	 mPllClockSourceSelectReg(&regs->PllClockSourceSelect)
{
}

// Protected //////////////////////////////////////////////////////////////

// Private ////////////////////////////////////////////////////////////////

}
}
}
}
