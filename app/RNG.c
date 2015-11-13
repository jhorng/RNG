#include "RNG.h"

void rngEnable(){
	RNG_reg->RNG_CR |= 0x00000004;
}

int readRandomData(){
	int status_reg;
	uint32_t data_reg;

	status_reg = RNG_reg->RNG_SR & 0x00000001;

	if (status_reg == 1){
		data_reg = RNG_reg->RNG_DR;
	}

	return data_reg;
}
