#include "D3AutonomousControlRegister.hpp"

namespace stm32h747
{
namespace sysctrl
{
namespace rcc
{
namespace regs
{

using stm32::intf::RegisterInterface;

D3AutonomousControlRegister::D3AutonomousControlRegister(union RccD3AutonomousControlReg* const regPtr)
	: RegisterInterface<union RccD3AutonomousControlReg>(regPtr)
{
}

bool D3AutonomousControlRegister::GetBdmaAutoModeEn() const
{
	return Reg()->bits.BdmaAutoModeEn; 
}

void D3AutonomousControlRegister::SetBdmaAutoModeEn(bool val)
{
	Reg()->bits.BdmaAutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetLpUart1AutoModeEn() const
{
	return Reg()->bits.LpUart1AutoModeEn; 
}

void D3AutonomousControlRegister::SetLpUart1AutoModeEn(bool val)
{
	Reg()->bits.LpUart1AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetSpi6AutoModeEn() const
{
	return Reg()->bits.Spi6AutoModeEn; 
}

void D3AutonomousControlRegister::SetSpi6AutoModeEn(bool val)
{
	Reg()->bits.Spi6AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetI2c4AutoModeEn() const
{
	return Reg()->bits.I2c4AutoModeEn; 
}

void D3AutonomousControlRegister::SetI2c4AutoModeEn(bool val)
{
	Reg()->bits.I2c4AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetLpTimer2AutoModeEn() const
{
	return Reg()->bits.LpTimer2AutoModeEn; 
}

void D3AutonomousControlRegister::SetLpTimer2AutoModeEn(bool val)
{
	Reg()->bits.LpTimer2AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetLpTimer3AutoModeEn() const
{
	return Reg()->bits.LpTimer3AutoModeEn; 
}

void D3AutonomousControlRegister::SetLpTimer3AutoModeEn(bool val)
{
	Reg()->bits.LpTimer3AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetLpTimer4AutoModeEn() const
{
	return Reg()->bits.LpTimer4AutoModeEn; 
}

void D3AutonomousControlRegister::SetLpTimer4AutoModeEn(bool val)
{
	Reg()->bits.LpTimer4AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetLpTimer5AutoModeEn() const
{
	return Reg()->bits.LpTimer5AutoModeEn; 
}

void D3AutonomousControlRegister::SetLpTimer5AutoModeEn(bool val)
{
	Reg()->bits.LpTimer5AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetComp12AutoModeEn() const
{
	return Reg()->bits.Comp12AutoModeEn; 
}

void D3AutonomousControlRegister::SetComp12AutoModeEn(bool val)
{
	Reg()->bits.Comp12AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetVrefAutoModeEn() const
{
	return Reg()->bits.VrefAutoModeEn; 
}

void D3AutonomousControlRegister::SetVrefAutoModeEn(bool val)
{
	Reg()->bits.VrefAutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetRtcAutoModeEn() const
{
	return Reg()->bits.RtcAutoModeEn; 
}

void D3AutonomousControlRegister::SetRtcAutoModeEn(bool val)
{
	Reg()->bits.RtcAutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetCrcAutoModeEn() const
{
	return Reg()->bits.CrcAutoModeEn; 
}

void D3AutonomousControlRegister::SetCrcAutoModeEn(bool val)
{
	Reg()->bits.CrcAutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetSai4AutoModeEn() const
{
	return Reg()->bits.Sai4AutoModeEn; 
}

void D3AutonomousControlRegister::SetSai4AutoModeEn(bool val)
{
	Reg()->bits.Sai4AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetAdc3AutoModeEn() const
{
	return Reg()->bits.Adc3AutoModeEn; 
}

void D3AutonomousControlRegister::SetAdc3AutoModeEn(bool val)
{
	Reg()->bits.Adc3AutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetBackupRamAutoModeEn() const
{
	return Reg()->bits.BackupRamAutoModeEn; 
}

void D3AutonomousControlRegister::SetBackupRamAutoModeEn(bool val)
{
	Reg()->bits.BackupRamAutoModeEn = val; 
}

bool D3AutonomousControlRegister::GetSram4AutoModeEn() const
{
	return Reg()->bits.Sram4AutoModeEn; 
}

void D3AutonomousControlRegister::SetSram4AutoModeEn(bool val)
{
	Reg()->bits.Sram4AutoModeEn = val; 
}

}
}
}
}
