#include "stm32f4xx.h"
#include "stm32f4xx_hal_rcc.h"
#include "RNG.h"
#include "RCC.h"
#include <stdint.h>

void delay(uint32_t delayCount){
	while(delayCount != 0){
		delayCount--;
	}
}

int main(){
	int32_t randNum=0;
	rngUnresetEnableClock();
	rngEnable();

	while(1){
		randNum = readRandomData();
	}
}
