#ifndef __RNG_H__
#define __RNG_H__

#include <stdint.h>

typedef struct RNG_t Rng;
struct RNG_t{
	volatile uint32_t RNG_CR;
	volatile uint32_t RNG_SR;
	volatile uint32_t RNG_DR;
};

#define RNG_reg	((Rng*)0x50060800)

void rngEnable();
int readRandomData();

#endif // __RNG_H__
