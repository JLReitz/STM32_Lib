#ifndef RCCIMPL_HPP_
#define RCCIMPL_HPP_

#include "../Registers/SourceControlRegister.hpp"

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
};

}
}
}
}

#endif
