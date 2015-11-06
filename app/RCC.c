#include "RCC.h"

void rngUnresetEnableClock(){
	Rcc_reg->RCC_AHB2RSTR &= ~(1 << 7);
	Rcc_reg->RCC_AHB2ENR |= 0x00000040;
}
