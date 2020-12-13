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
:	 mSourceControlReg(&regs->SourceControl)
{
}

// Protected //////////////////////////////////////////////////////////////

// Private ////////////////////////////////////////////////////////////////

}
}
}
}
