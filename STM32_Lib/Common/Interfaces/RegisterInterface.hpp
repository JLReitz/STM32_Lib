#ifndef REGISTERINTF_HPP_
#define REGISTERINTF_HPP_

#include <stdint.h>

namespace stm32
{
namespace intf
{

template <typename T>
class RegisterInterface
{
public:

	RegisterInterface(T* const reg)
		:
		mRegPtr(reg)
	{
	}

	uint32_t GetReg() const
	{
		return *mRegPtr.all;
	}

	void SetReg(uint32_t val)
	{
		*mRegPtr.all = val;
	}

protected:

	T* Reg() const
	{
		return mRegPtr;
	}

private:

	T* const mRegPtr;
};

}
}

#endif
