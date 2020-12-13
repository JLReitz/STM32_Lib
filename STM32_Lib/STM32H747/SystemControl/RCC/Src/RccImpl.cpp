#include "../Include/RccImpl.hpp"

namespace Stm32
{
namespace sysctrl
{
namespace rcc
{
namespace impl
{

/* ================================================================================================
 *  Stm32::sysctrl::rcc::impl::RccImpl
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
