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

union RccPllConfigurationReg
{
	uint32_t all;
	struct
	{
		bool Pll1FracEnable : 1;
		bool Pll1VcoSel : 1;
		uint8_t Pll1InputFreqRange : 2;
		bool Pll2FracEnable : 1;
		bool Pll2VcoSel : 1;
		uint8_t Pll2InputFreqRange : 2;
		bool Pll3FracEnable : 1;
		bool Pll3VcoSel : 1;
		uint8_t Pll3InputFreqRange : 2;
		uint8_t rsvd1 : 4;
		bool Pll1DivPEnable : 1;
		bool Pll1DivQEnable : 1;
		bool Pll1DivREnable : 1;
		bool Pll2DivPEnable : 1;
		bool Pll2DivQEnable : 1;
		bool Pll2DivREnable : 1;
		bool Pll3DivPEnable : 1;
		bool Pll3DivQEnable : 1;
		bool Pll3DivREnable : 1;
		uint8_t rsvd2 : 7;
	} bits;
};

union RccPllDividerReg
{
	uint32_t all;
	struct
	{
		uint16_t VcoMultFactor : 9;
		uint8_t DivPFactor : 7;
		uint8_t DivQFactor : 7;
		bool rsvd1 : 1;
		uint8_t DivRFactor : 7;
		bool rsvd2 : 1;
	} bits;
};

union RccPllFractionalDividerReg
{
	uint32_t all;
	struct
	{
		uint8_t rsvd1 : 3;
		uint16_t VcoFracFactor : 13;
		uint32_t rsvd2 : 16;
	} bits;
};

union RccDomain1KernelClockConfigReg
{
	uint32_t all;
	struct
	{
		uint8_t FmcClkSel : 2;
		uint8_t rsvd1 : 2;
		uint8_t QuadSpiClkSel : 2;
		uint8_t rsvd2 : 2;
		bool DsiClkSel : 1;
		uint8_t rsvd3 : 7;
		bool SdmmcClkSel : 1;
		uint16_t rsvd4 : 11;
		uint8_t PeripheralClkSel : 2;
		uint8_t rsvd5 : 2;
	} bits;
};

union RccDomain2KernelClockConfig1Reg
{
	uint32_t all;
	struct
	{
		uint8_t SaiDfsdm1AClkSel : 3;
		uint8_t rsvd1 : 3;
		uint8_t Sai23ClkSel : 3;
		uint8_t rsvd2 : 3;
		uint8_t SpiI2s123ClkSel : 3;
		bool rsvd3 : 1;
		uint8_t Spi45ClkSel : 3;
		bool rsvd4 : 1;
		uint8_t SpdifrxClkSel : 2;
		uint8_t rsvd5 : 2;
		bool Dfsdm1ClkSel : 1;
		uint8_t rsvd6 : 3;
		uint8_t FdCanClkSel : 2;
		bool rsvd7 : 1;
		bool SwpmiClkSel : 1;
	} bits;
};

union RccDomain2KernelClockConfig2Reg
{
	uint32_t all;
	struct
	{
		uint8_t Usart234578ClkSel : 3;
		uint8_t Usart16ClkSel : 3;
		uint8_t rsvd1 : 2;
		uint8_t RngClkSel : 2;
		uint8_t rsvd2 : 2;
		uint8_t I2c123ClkSel : 2;
		uint8_t rsvd3 : 6;
		uint8_t UsbClkSel : 2;
		uint8_t HdmiCecClkSel : 2;
		uint8_t rsvd4 : 4;
		uint8_t LpTimer1ClkSel : 3;
		bool rsvd5 : 1;
	} bits;
};

union RccDomain3KernelClockConfigReg
{
	uint32_t all;
	struct
	{
		uint8_t LpUartClkSel : 3;
		uint8_t rsvd1 : 5;
		uint8_t I2c4ClkSel : 2;
		uint8_t LpTimer2ClkSel : 3;
		uint8_t LpTimer345ClkSel : 3;
		uint8_t SarAdcClkSel : 2;
		uint8_t rsvd2 : 3;
		uint8_t Sai4AClkSel : 3;
		uint8_t Sai4BClkSel : 3;
		bool rsvd3 : 1;
		uint8_t Spi6ClkSel : 3;
		bool rsvd4 : 1;
	} bits;
};

union RccClockSourceInterruptEnableReg
{
	uint32_t all;
	struct
	{
		bool LsiReadyIntEn : 1;
		bool LseReadyIntEn : 1;
		bool HsiReadyIntEn : 1;
		bool HseReadyIntEn : 1;
		bool CsiReadyIntEn : 1;
		bool Hsi48ReadyIntEn : 1;
		bool Pll1ReadyIntEn : 1;
		bool Pll2ReadyIntEn : 1;
		bool Pll3ReadyIntEn : 1;
		bool LseSecurityIntEn : 1;
		uint32_t rsvd : 22;
	} bits;
};

union RccClockSourceInterruptFlagReg
{
	uint32_t all;
	struct
	{
		bool LsiReadyInt : 1;
		bool LseReadyInt : 1;
		bool HsiReadyInt : 1;
		bool HseReadyInt : 1;
		bool CsiReadyInt : 1;
		bool Hsi48ReadyInt : 1;
		bool Pll1ReadyInt : 1;
		bool Pll2ReadyInt : 1;
		bool Pll3ReadyInt : 1;
		bool LseSecurityInt : 1;
		bool HseSecurityInt : 1;
		uint32_t rsvd : 21;
	} bits;
};

union RccClockSourceInterruptClearReg
{
	uint32_t all;
	struct
	{
		bool LsiReadyIntClear : 1;
		bool LseReadyIntClear : 1;
		bool HsiReadyIntClear : 1;
		bool HseReadyIntClear : 1;
		bool CsiReadyIntClear : 1;
		bool Hsi48ReadyIntClear : 1;
		bool Pll1ReadyIntClear : 1;
		bool Pll2ReadyIntClear : 1;
		bool Pll3ReadyIntClear : 1;
		bool LseSecurityIntClear : 1;
		bool HseSecurityIntClear : 1;
		uint32_t rsvd : 21;
	} bits;
};

union RccBackupDomainControlReg
{
	uint32_t all;
	struct
	{
		bool LseOscOn : 1;
		bool LseOscReady : 1;
		bool LseOscBypass : 1;
		uint8_t LseDriveCapability : 2;
		bool LseSecurityEn : 1;
		bool LseSecurityFail : 1;
		bool rsvd1 : 1;
		uint8_t RtcClkSel : 2;
		uint8_t rsvd2 : 5;
		bool RtcClkEn : 1;
		bool BdSoftwareRst : 1;
		uint16_t rsvd3 : 15;
	} bits;
};

union RccClockControlAndStatusReg
{
	uint32_t all;
	struct
	{
		bool LsiOscEn : 1;
		bool LsiOscReady : 1;
		uint32_t rsvd : 30;
	} bits;
};

union RccAhb3ResetReg
{
	uint32_t all;
	struct
	{
		bool MdmaBlockRst : 1;
		uint8_t rsvd1 : 3;
		bool Dma2DBlockRst : 1;
		bool JpgBlockRst : 1;
		uint8_t rsvd2 : 6;
		bool FmcBlockRst : 1;
		bool rsvd3 : 1;
		bool QuadSpiBlockRst : 1;
		bool rsvd4 : 1;
		bool Sdmmc1BlockRst : 1;
		uint16_t rsvd5 : 15;
	} bits;
};

union RccAhb1PeripheralResetReg
{
	uint32_t all;
	struct
	{
		bool Dma1BlockRst : 1;
		bool Dma2BlockRst : 1;
		uint8_t rsvd1 : 3;
		bool Adc12BlockRst : 1;
		uint8_t rsvd2 : 8;
		bool ArtBlockRst : 1;
		bool Eth1MacBlockRst : 1;
		uint16_t rsvd3 : 9;
		bool Usb1OtgBlockRst : 1;
		bool rsvd4 : 1;
		bool Usb2OtgBlockRst : 1;
		uint8_t rsvd5 : 4;
	} bits;
};

union RccAhb2PeripheralResetReg
{
	uint32_t all;
	struct
	{
		bool CamitfBlockRst : 1;
		uint8_t rsvd1 : 3;
		bool CryptBlockRst : 1;
		bool HashBlovkRst : 1;
		bool RngBlockRst : 1;
		uint8_t rsvd2 : 2;
		bool Sdmmc2BlockRst : 1;
		uint32_t rsvd3 : 22;
	} bits;
};

union RccAhb4PeripheralResetReg
{
	uint32_t all;
	struct
	{
		bool GpioABlockRst : 1;
		bool GpioBBlockRst : 1;
		bool GpioCBlockRst : 1;
		bool GpioDBlockRst : 1;
		bool GpioEBlockRst : 1;
		bool GpioFBlockRst : 1;
		bool GpioGBlockRst : 1;
		bool GpioHBlockRst : 1;
		bool GpioIBlockRst : 1;
		bool GpioJBlockRst : 1;
		bool GpioKBlockRst : 1;
		uint8_t rsvd1 : 8;
		bool CrcBlockRst : 1;
		bool rsvd2 : 1;
		bool BdmaBlockRst : 1;
		uint8_t rsvd3 : 2;
		bool Adc3BlockRst : 1;
		bool HsemBlockRst : 1;
		uint8_t rsvd4 : 6;
	} bits;
};

union RccApb3PeripheralResetReg
{
	uint32_t all;
	struct
	{
		uint8_t rsvd1 : 3;
		bool LtdcBlockRst : 1;
		bool DsiBlockRst : 1;
		uint32_t rsvd2 : 27;
	} bits;
};

union RccApb1PeripheralReset1Reg
{
	uint32_t all;
	struct
	{
		bool Timer2BlockRst : 1;
		bool Timer3BlockRst : 1;
		bool Timer4BlockRst : 1;
		bool Timer5BlockRst : 1;
		bool Timer6BlockRst : 1;
		bool Timer7BlockRst : 1;
		bool Timer12BlockRst : 1;
		bool Timer13BlockRst : 1;
		bool Timer14BlockRst : 1;
		bool LpTimer1BlockRst : 1;
		uint8_t rsvd1 : 4;
		bool Spi2BlockRst : 1;
		bool Spi3BlockRst : 1;
		bool SpdifRxBlockRst : 1;
		bool Usart2BlockRst : 1;
		bool Usart3BlockRst : 1;
		bool Uart4BlockRst : 1;
		bool Uart5BlockRst : 1;
		bool I2c1BlockRst : 1;
		bool I2c2BlockRst : 1;
		bool I2c3BlockRst : 1;
		uint8_t rsvd2 : 3;
		bool HdmiCecBlockRst : 1;
		bool rsvd3 : 1;
		bool Dac12BlockRst : 1;
		bool Uart7BlockRst : 1;
		bool Uart8BLockRst : 1;
	} bits;
};

union RccApb1PeripheralReset2Reg
{
	uint32_t all;
	struct
	{
		bool rsvd1 : 1;
		bool CrsBlockRst : 1;
		bool SwpmiBlockRst : 1;
		bool rsvd2 : 1;
		bool OpampBlockRst : 1;
		bool MdiosBlockRst : 1;
		uint8_t rsvd3 : 2;
		bool FdCanBlockRst : 1;
		uint32_t rsvd4 : 23;
	} bits;
};

union RccApb2PeripheralResetReg
{
	uint32_t all;
	struct
	{
		bool Timer1BlockRst : 1;
		bool Timer8BlockRst : 1;
		uint8_t rsvd1 : 2;
		bool Usart1BlockRst : 1;
		bool Usart6BlockRst : 1;
		uint8_t rsvd2 : 6;
		bool Spi1BlockRst : 1;
		bool Spi4BlockRst : 1;
		uint8_t rsvd3 : 2;
		bool Timer15BlockRst : 1;
		bool Timer16BlockRst : 1;
		bool Timer17BlockRst : 1;
		bool rsvd4 : 1;
		bool Spi5BlockRst : 1;
		bool rsvd5 : 1;
		bool Sai1BlockRst : 1;
		bool Sai2BlockRst : 1;
		bool Sai3BlockRst : 1;
		uint8_t rsvd6 : 3;
		bool Dfsdm1BlockRst : 1;
		bool HrTimerBlockRst : 1;
		uint8_t rsvd7 : 2;
	} bits;
};

union RccApb4PeripheralResetReg
{
	uint32_t all;
	struct
	{
		bool rsvd1 : 1;
		bool SysConfigBlockRst : 1;
		bool rsvd2 : 1;
		bool LpUart1BlockRst : 1;
		bool rsvd3 : 1;
		bool Spi6BlockRst : 1;
		bool rsvd4 : 1;
		bool I2c4Rst : 1;
		bool rsvd5 : 1;
		bool LpTimer2BlockRst : 1;
		bool LpTimer3BlockRst : 1;
		bool LpTimer4BlockRst : 1;
		bool LpTimer5BlockRst : 1;
		bool rsvd6 : 1;
		bool Comp12BlockRst : 1;
		bool VrefBlockRst : 1;
		uint8_t rsvd7 : 5;
		bool Sai4BlockRst : 1;
		uint16_t rsvd8 : 10;
	} bits;
};

union RccGlobalControlReg
{
	uint32_t all;
	struct
	{
		bool Watchdog1RstScope : 1;
		bool Watchdog2RstScope : 1;
		bool BootCpu1 : 1;
		bool BootCpu2 : 1;
		uint32_t rsvd: 28;
	} bits;
};

union RccD3AutonomousControlReg
{
	uint32_t all;
	struct
	{
		bool BdmaAutoModeEn : 1;
		uint8_t rsvd1 : 2;
		bool LpUart1AutoModeEn : 1;
		bool rsvd2 : 1;
		bool Spi6AutoModeEn : 1;
		bool rsvd3 : 1;
		bool I2c4AutoModeEn : 1;
		bool rsvd4 : 1;
		bool LpTimer2AutoModeEn : 1;
		bool LpTimer3AutoModeEn : 1;
		bool LpTimer4AutoModeEn : 1;
		bool LpTimer5AutoModeEn : 1;
		bool rsvd5 : 1;
		bool Comp12AutoModeEn : 1;
		bool VrefAutoModeEn : 1;
		bool RtcAutoModeEn : 1;
		uint8_t rsvd6 : 2;
		bool CrcAutoModeEn : 1;
		bool rsvd7 : 1;
		bool Sai4AutoModeEn : 1;
		uint8_t rsvd8 : 2;
		bool Adc3AutoModeEn : 1;
		uint8_t rsvd9 : 3;
		bool BackupRamAutoModeEn : 1;
		bool Sram4AutoModeEn : 1;
		uint8_t rsvd10 : 2;
	} bits;
};

union RccResetStatusReg
{
	uint32_t all;
	struct
	{
		uint16_t rsvd : 16;
		bool RemoveRstFlag : 1;
		bool Cpu1RstFlag : 1;
		bool Cpu2RstFlag : 1;
		bool D1PowerRstFlag : 1;
		bool D2PowerRstFlag : 1;
		bool BorRstFlag : 1;
		bool PinRstFlag : 1;
		bool PorRstFlag : 1;
		bool Cpu1SystemRstFlag : 1;
		bool Cpu2SystemRstFlag : 1;
		bool Cpu1IWatchdogRstFlag : 1;
		bool Cpu2IWatchdogRstFlag : 1;
		bool Cpu1WWatchdogRstFlag : 1;
		bool Cpu2WWatchdogRstFlag : 1;
		bool Cpu1LpwrRstFlag : 1;
		bool Cpu2LpwrRstFlag : 1;
	} bits;
};

union RccAhb3ClockReg
{
	uint32_t all;
	struct
	{
		bool MdmaPClkEn : 1;
		uint8_t rsvd1 : 3;
		bool Dma2DPClkEn : 1;
		bool JpegPClkEn : 1;
		uint8_t rsvd2 : 2;
		bool D1FlashIntfEn : 1;
		uint8_t rsvd3 : 3;
		bool FmcPClkEn : 1;
		bool rsvd4 : 1;
		bool QuadSpiClkEn : 1;
		bool rsvd5 : 1;
		bool Sdmmc1ClkEn : 1;
		uint16_t rsvd6 : 11;
		bool D1Dtcm1BlockEn : 1;
		bool D1Dtcm2BlockEn : 1;
		bool D1Itcm1BlockEn : 1;
		bool AxisRamBlockEn : 1;
	} bits;
};

union RccAhb1ClockReg
{
	uint32_t all;
	struct
	{
		bool Dma1ClkEn : 1;
		bool Dma2ClkEn : 1;
		uint8_t rsvd1 : 3;
		bool Adc12PClkEn : 1;
		uint8_t rsvd2 : 8;
		bool ArtClkEn : 1;
		bool Eth1MacClkEn : 1;
		bool Eth1TxClkEn : 1;
		bool Eth1RcClkEn : 1;
		bool Usb2UlpiPhyClkEn : 1;
		uint8_t rsvd3 : 6;
		bool Usb1OtgPClkEn : 1;
		bool Usb1UlpiPhyClkEn : 1;
		bool Usb2OtgPClkEn : 1;
		uint8_t rsvd4 : 4;
	} bits;
};

union RccAhb2ClockReg
{
	uint32_t all;
	struct
	{
		bool DcmiPClkEn : 1;
		uint8_t rsvd1 : 3;
		bool CryptPClkEn : 1;
		bool HashPClkEn : 1;
		bool RngPClkEn : 1;
		uint8_t rsvd2 : 2;
		bool Sdmmc2ClkEn : 1;
		uint32_t rsvd3 : 19;
		bool Sram1BlockEn : 1;
		bool Sram2BlockEn : 1;
		bool Sram3BlockEn : 1;
	} bits;
};

union RccAhb4ClockReg
{
	uint32_t all;
	struct
	{
		bool GpioAPClkEn : 1;
		bool GpioBPClkEn : 1;
		bool GpioCPClkEn : 1;
		bool GpioDPClkEn : 1;
		bool GpioEPClkEn : 1;
		bool GpioFPClkEn : 1;
		bool GpioGPClkEn : 1;
		bool GpioHPClkEn : 1;
		bool GpioIPClkEn : 1;
		bool GpioJPClkEn : 1;
		bool GpioKPClkEn : 1;
		uint8_t rsvd1 : 8;
		bool CrcPClkEn : 1;
		bool rsvd2 : 1;
		bool BmdaClkEn : 1;
		uint8_t rsvd3 : 2;
		bool Adc3PClkEn : 1;
		bool HsemPClkEn : 1;
		uint8_t rsvd4 : 2;
		bool BkRamClkEn : 1;
		uint8_t rsvd5 : 3;
	} bits;
};

union RccApb3ClockReg
{
	uint32_t all;
	struct
	{
		uint8_t rsvd1 : 3;
		bool LtdcPClkEn : 1;
		bool DsiPClkEn : 1;
		bool rsvd2 : 1;
		bool WWatchdogClkEn : 1;
		uint32_t rsvd3 : 25;
	} bits;
};

union RccApb1Clock1Reg
{
	uint32_t all;
	struct
	{
		bool Timer2PClkEn : 1;
		bool Timer3PClkEn : 1;
		bool Timer4PClkEn : 1;
		bool Timer5PClkEn : 1;
		bool Timer6PClkEn : 1;
		bool Timer7PClkEn : 1;
		bool Timer12PClkEn : 1;
		bool Timer13PClkEn : 1;
		bool Timer14PClkEn : 1;
		bool LpTimer1PClkEn : 1;
		bool rsvd1 : 1;
		bool WWatchdog2PClkEn : 1;
		uint8_t rsvd2 : 2;
		bool Spi2PClkEn : 1;
		bool Spi3PClkEn : 1;
		bool SpdifRxPClkEn : 1;
		bool Usart2PClkEn : 1;
		bool Usart3PClkEn : 1;
		bool Uart4PClkEn : 1;
		bool Uart5PClkEn : 1;
		bool I2c1PClkEn : 1;
		bool I2c2PClkEn : 1;
		bool I2c3PClkEn : 1;
		uint8_t rsvd3 : 3;
		bool HdmiCecPClkEn : 1;
		bool rsvd4 : 1;
		bool Dac12PClkEn : 1;
		bool Uart7PClkEn : 1;
		bool Uart8PClkEn : 1;
	} bits;
};

union RccApb1Clock2Reg
{
	uint32_t all;
	struct
	{
		bool rsvd1 : 1;
		bool CrsPClkEn : 1;
		bool PwpmiPClkEn : 1;
		bool rsvd2 : 1;
		bool OpampPClkEn : 1;
		bool MdiosPClkEn : 1;
		uint8_t rsvd3 : 2;
		bool FdCanPClkEn : 1;
		uint32_t rsvd4 : 23;
	} bits;
};

union RccApb2ClockReg
{
	uint32_t all;
	struct
	{
		bool Timer1PClkEn : 1;
		bool Timer8PClkEn : 1;
		uint8_t rsvd1 : 2;
		bool Usart1PClkEn : 1;
		bool Usart6PClkEn : 1;
		uint8_t rvsd2 : 6;
		bool Spi1PClkEn : 1;
		bool Spi4PClkEn : 1;
		uint8_t rsvd3 : 2;
		bool Timer15PClkEn : 1;
		bool Timer16PClkEn : 1;
		bool Timer17PClkEn : 1;
		bool rsvd4 : 1;
		bool Spi5PClkEn : 1;
		bool rsvd5 : 1;
		bool Sai1PClkEn : 1;
		bool Sai2PClkEn : 1;
		bool Sai3PClkEn : 1;
		uint8_t rsvd6 : 3;
		bool Dfsdm1PClkEn : 1;
		bool HrTimerPClkEn : 1;
		uint8_t rsvd7 : 2;
	} bits;
};

union RccApb4ClockReg
{
	uint32_t all;
	struct
	{
		bool rsvd1 : 1;
		bool SysConfigPClkEn : 1;
		bool rsvd2 : 1;
		bool LpUart1PClkEn : 1;
		bool rsvd3 : 1;
		bool Spi6PClkEn : 1;
		bool rsvd4 : 1;
		bool I2c4PClkEn : 1;
		bool rsvd5 : 1;
		bool LpTimer2PClkEn : 1;
		bool LpTimer3PClkEn : 1;
		bool LpTimer4PClkEn : 1;
		bool LpTimer5PClkEn : 1;
		bool rsvd6 : 1;
		bool Comp12PClkEn: 1;
		bool VrefPClkEn : 1;
		uint8_t rsvd7 : 5;
		bool Sai4PClkEn : 1;
		uint16_t rsvd8 : 10;
	} bits;
};

struct RccRegisterBank
{
	// Registers accessible by both cores
	RccSourceControlReg	SourceControl;
	RccHsiConfigurationReg HsiConfiguration;
	RccClockRecoveryRcReg ClockRecoveryRc;
	RccCsiConfigurationReg CsiConfiguration;
	RccClockConfigurationReg ClockConfiguration;
	RccD1ClockConfigurationReg D1ClockConfiguration;
	RccD2ClockConfigurationReg D2ClockConfiguration;
	RccD3ClockConfigurationReg D3ClockConfiguration;
	RccPllClockSourceSelectReg PllClockSourceSelect;
	RccPllConfigurationReg PllConfiguration;
	RccPllDividerReg Pll1Dividers;
	RccPllFractionalDividerReg Pll1FractionalDivider;
	RccPllDividerReg Pll2Dividers;
	RccPllFractionalDividerReg Pll2FractionalDivider;
	RccPllDividerReg Pll3Dividers;
	RccPllFractionalDividerReg Pll3FractionalDivider;
	uint32_t Reserved1;
	RccDomain1KernelClockConfigReg Domain1KernelClockConfig;
	RccDomain2KernelClockConfig1Reg Domain2KernelClockConfig1;
	RccDomain2KernelClockConfig2Reg Domain2KernelClockConfig2;
	RccDomain3KernelClockConfigReg Domain3KernelClockConfig;
	uint32_t Reserved2;
	RccClockSourceInterruptEnableReg ClockSourceInterruptEnable;
	RccClockSourceInterruptFlagReg ClockSourceInterruptFlag;
	RccClockSourceInterruptClearReg ClockSourceInterruptClear;
	uint32_t Reserved3;
	RccBackupDomainControlReg BackupDomainControl;
	RccClockControlAndStatusReg ClockControlAndStatus;
	uint32_t Reserved4;
	RccAhb3ResetReg Ahb3Reset;
	RccAhb1PeripheralResetReg Ahb1PeripheralReset;
	RccAhb2PeripheralResetReg Ahb2PeripheralReset;
	RccAhb4PeripheralResetReg Ahb4PeripheralReset;
	RccApb3PeripheralResetReg Apb3PeripheralReset;
	RccApb1PeripheralReset1Reg Apb1PeripheralReset1;
	RccApb1PeripheralReset2Reg Apb1PeripheralReset2;
	RccApb2PeripheralResetReg Apb2PeripheralReset;
	RccApb4PeripheralResetReg Apb4PeripheralReset;
	RccGlobalControlReg GlobalControl;
	uint32_t Reserved5;
	RccD3AutonomousControlReg D3AutonomousControl;
	uint32_t Reserved6[9];

	// Registers local to each core
	RccResetStatusReg ResetStatus;
	RccAhb3ClockReg Ahb3Clocks;
	RccAhb1ClockReg Ahb1Clocks;
	RccAhb2ClockReg Ahb2Clocks;
	RccAhb4ClockReg Ahb4Clocks;
	RccApb3ClockReg Apb3Clocks;
	RccApb1Clock1Reg Apb1Clocks1;
	RccApb1Clock2Reg Apb1Clocks2;
	RccApb2ClockReg Apb2Clocks;
	RccApb4ClockReg Apb4Clocks;
	uint32_t Reserved7;
	RccAhb3ClockReg Ahb3SleepClocks;
	RccAhb1ClockReg Ahb1SleepClocks;
	RccAhb2ClockReg Ahb2SleepClocks;
	RccAhb4ClockReg Ahb4SleepClocks;
	RccApb3ClockReg Apb3SleepClocks;
	RccApb1Clock1Reg Apb1SleepClocks1;
	RccApb1Clock2Reg Apb1SleepClocks2;
	RccApb2ClockReg Apb2SleepClocks;
	RccApb4ClockReg Apb4SleepClocks;
	uint32_t Reserved8[4];

	// CPU1 control bank -- accessible by both cores
	RccResetStatusReg Cpu1ResetStatus;
	RccAhb3ClockReg Cpu1Ahb3Clocks;
	RccAhb1ClockReg Cpu1Ahb1Clocks;
	RccAhb2ClockReg Cpu1Ahb2Clocks;
	RccAhb4ClockReg Cpu1Ahb4Clocks;
	RccApb3ClockReg Cpu1Apb3Clocks;
	RccApb1Clock1Reg Cpu1Apb1Clocks1;
	RccApb1Clock2Reg Cpu1Apb1Clocks2;
	RccApb2ClockReg Cpu1Apb2Clocks;
	RccApb4ClockReg Cpu1Apb4Clocks;
	uint32_t Reserved9;
	RccAhb3ClockReg Cpu1Ahb3SleepClocks;
	RccAhb1ClockReg Cpu1Ahb1SleepClocks;
	RccAhb2ClockReg Cpu1Ahb2SleepClocks;
	RccAhb4ClockReg Cpu1Ahb4SleepClocks;
	RccApb3ClockReg Cpu1Apb3SleepClocks;
	RccApb1Clock1Reg Cpu1Apb1SleepClocks1;
	RccApb1Clock2Reg Cpu1Apb1SleepClocks2;
	RccApb2ClockReg Cpu1Apb2SleepClocks;
	RccApb4ClockReg Cpu1Apb4SleepClocks;
	uint32_t Reserved10[4];

	// CPU2 control bank -- accessible by both cores
	RccResetStatusReg Cpu2ResetStatus;
	RccAhb3ClockReg Cpu2Ahb3Clocks;
	RccAhb1ClockReg Cpu2Ahb1Clocks;
	RccAhb2ClockReg Cpu2Ahb2Clocks;
	RccAhb4ClockReg Cpu2Ahb4Clocks;
	RccApb3ClockReg Cpu2Apb3Clocks;
	RccApb1Clock1Reg Cpu2Apb1Clocks1;
	RccApb1Clock2Reg Cpu2Apb1Clocks2;
	RccApb2ClockReg Cpu2Apb2Clocks;
	RccApb4ClockReg Cpu2Apb4Clocks;
	uint32_t Reserved11;
	RccAhb3ClockReg Cpu2Ahb3SleepClocks;
	RccAhb1ClockReg Cpu2Ahb1SleepClocks;
	RccAhb2ClockReg Cpu2Ahb2SleepClocks;
	RccAhb4ClockReg Cpu2Ahb4SleepClocks;
	RccApb3ClockReg Cpu2Apb3SleepClocks;
	RccApb1Clock1Reg Cpu2Apb1SleepClocks1;
	RccApb1Clock2Reg Cpu2Apb1SleepClocks2;
	RccApb2ClockReg Cpu2Apb2SleepClocks;
	RccApb4ClockReg Cpu2Apb4SleepClocks;
	uint32_t Reserved12[4];
};

#endif
