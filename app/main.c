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
	int b;
	int32_t a=0;
	//__HAL_RCC_USB_OTG_FS_CLK_ENABLE();
	//__HAL_RCC_RNG_CLK_ENABLE();
	rngUnresetEnableClock();
	rngEnable();
	b = RNG_reg->RNG_SR;
	while(1){
	//	delay(5000);
		//b = RNG_reg->RNG_SR;
	//	if (b == 0x00000001)
			a = RNG_reg->RNG_DR;
	}
}
