#include "RCC.h"

void rngUnresetEnableClock(){
	Rcc_reg->RCC_AHB2RSTR &= ~(1 << 7);
	Rcc_reg->RCC_AHB2ENR |= 1 << 6;
}
