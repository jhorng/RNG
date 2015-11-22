#include "stm32f4xx.h"
#include "stm32f4xx_hal_rcc.h"
#include "RNG.h"
#include "RCC.h"
#include <stdint.h>

volatile int32_t randNum;

void delay(uint32_t delayCount){
	while(delayCount != 0){
		delayCount--;
	}
}

void HASH_RNG_IRQHandler(){
	if ((RNG_reg->RNG_SR) == 1){
    randNum = RNG_reg->RNG_DR;
  }
  else{
    RNG_reg->RNG_SR = 0;
  }
}


int main(){
  int i=0;
	rngUnresetEnableClock();
	rngEnable();

  HAL_NVIC_EnableIRQ(HASH_RNG_IRQn);

	while(1){
		// randNum = readRandomData();
    i++;
  }
}
