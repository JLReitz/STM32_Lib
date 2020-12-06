#ifndef RCCREGS_H_
#define RCCREGS_H_

#include <stdint.h>

union SourceControl_Reg
{
	uint32_t all;
	struct
	{
		bool HsiOn : 1;
		bool HsiKerOn : 1;
		bool HsiReady : 1;
		uint8_t HsiDiv : 2;
		bool HsiDivFlag : 1;
		bool rsvd1 : 1;
		bool CsiOn : 1;
		bool CsiReady : 1;
		bool CsiKerOn : 1;
		uint8_t rsvd2 : 2;
		bool Hsi48On : 1;
		bool Hsi48Ready : 1;
		bool D1ClockReady : 1;
		bool D2ClockReady : 1;
		bool HseOn : 1;
		bool HseReady : 1;
		bool HseBypass : 1;
		bool HseCssOn : 1;
		uint8_t rsvd3 : 2;
		bool Pll1On : 1;
		bool Pll1Ready : 1;
		bool Pll2On : 1;
		bool Pll2Ready : 1;
		bool Pll3On : 1;
		bool Pll3Ready : 1;
	} bits;
};

#endif
