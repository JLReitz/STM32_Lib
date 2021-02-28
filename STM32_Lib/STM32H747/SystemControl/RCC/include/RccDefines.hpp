#pragma once

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace defines
{

enum class PllClockSource
{
	eHsi = 0,
    eCsi = 1,
	eHse = 2
};

enum class PllVcoSelection
{
	eHighVco = 0,
    eLowVco = 1
};

}
}
}
}
