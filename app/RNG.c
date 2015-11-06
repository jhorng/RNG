#include "RNG.h"

void rngEnable(){
	RNG_reg->RNG_CR |= 0x00000004;
}

