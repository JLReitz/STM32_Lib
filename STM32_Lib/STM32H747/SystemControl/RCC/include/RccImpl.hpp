#ifndef RCCIMPL_HPP_
#define RCCIMPL_HPP_

#include "../Registers/SourceControlRegister.hpp"

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

	Stm32::sysctrl::rcc::regs::SourceControlRegister mSourceControlReg;
};

}
}
}
}

#endif
