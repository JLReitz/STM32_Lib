#ifndef RCCREGS_H_
#define RCCREGS_H_

#include <stdint.h>

union RccSourceControlReg
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
		uint8_t rsvd3 : 4;
		bool Pll1On : 1;
		bool Pll1Ready : 1;
		bool Pll2On : 1;
		bool Pll2Ready : 1;
		bool Pll3On : 1;
		bool Pll3Ready : 1;
		uint8_t rsvd4 : 2;
	} bits;
};

union RccHsiConfigurationReg
{
	uint32_t all;
	struct
	{
		uint16_t HsiCal : 12;
		uint16_t rsvd1 : 12;
		uint8_t HsiTrim : 7;
		bool rsvd2 : 1;
	} bits;
};

union RccClockRecoveryRcReg
{
	uint32_t all;
	struct
	{
		uint16_t Hsi48Cal : 10;
		uint32_t rsvd : 22;
	} bits;
};

union RccCsiConfigurationReg
{
	uint32_t all;
	struct
	{
		uint16_t CsiCal : 10;
		uint16_t rsvd1 : 14;
		uint8_t CsiTrim : 6;
		bool rsvd2 : 2;
	} bits;
};

union RccClockConfigurationReg
{
	uint32_t all;
	struct
	{
		uint8_t SysClkSwitch : 3;
		uint8_t SysClkSwitchStatus : 3;
		bool SysClkSelAfterWakeup : 1;
		bool KernelClkSelAfterWakeup : 1;
		uint8_t RtcClkDiv : 6;
		bool HrTimerPrescaleSel : 1;
		bool TimerPrescaleSel : 1;
		uint8_t rsvd : 2;
		uint8_t McuClkOut1Prescale : 4;
		uint8_t McuClkOut1Sel : 3;
		uint8_t McuClkOut2Prescale : 4;
		uint8_t McuClkOut2Sel : 3;
	} bits;
};

union RccD1ClockConfigurationReg
{
	uint32_t all;
	struct
	{
		uint8_t AhbPrescale : 4;
		uint8_t Apb3Prescale : 3;
		bool rsvd1 : 1;
		uint8_t CorePrescale: 4;
		uint32_t rsvd2 : 20;
	} bits;
};

union RccD2ClockConfigurationReg
{
	uint32_t all;
	struct
	{
		uint8_t rsvd1 : 4;
		uint8_t Apb1Prescale : 3;
		bool rsvd2 : 1;
		uint8_t Apb2Prescale: 3;
		uint32_t rsvd3 : 21;
	} bits;
};

union RccD3ClockConfigurationReg
{
	uint32_t all;
	struct
	{
		uint8_t rsvd1 : 4;
		uint8_t Apb4Prescale : 3;
		uint32_t rsvd2 : 25;
	} bits;
};

union RccPllClockSourceSelectReg
{
	uint32_t all;
	struct
	{
		uint8_t PllSource : 2;
		uint8_t rsvd1 : 2;
		uint8_t Pll1Prescale : 6;
		uint8_t rsvd2 : 2;
		uint8_t Pll2Prescale : 6;
		uint8_t rsvd3 : 2;
		uint8_t Pll3Prescale : 6;
		uint8_t rsvd4 : 6;
	} bits;
};

struct RccRegisterBank
{
	RccSourceControlReg	SourceControl;
	RccHsiConfigurationReg HsiConfiguration;
	RccClockRecoveryRcReg ClockRecoveryRc;
	RccCsiConfigurationReg CsiConfiguration;
	RccClockConfigurationReg ClockConfiguration;
	RccD1ClockConfigurationReg D1ClockConfiguration;
	RccD2ClockConfigurationReg D2ClockConfiguration;
	RccD3ClockConfigurationReg D3ClockConfiguration;
	RccPllClockSourceSelectReg PllClockSourceSelect;
};

#endif
