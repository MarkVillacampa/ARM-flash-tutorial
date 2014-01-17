//Test
#include "stm32f10x.h"
#include "leds.h"
#include "buttons.h"
//delay function
void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
}
int main(void)
{
  //init leds
  LEDsInit();
  ButtonsInit();
while (1)
  {
	//read S2 button
	if (ButtonRead(BPORT, BS2))
	{
		//led 1 on
		LEDOn(1);
		//delay
		Delay(2000000);
		//led 1 off
		LEDOff(1);
	}
	//read S3 button
	if (ButtonRead(BPORT, BS3))
	{
		//led 2 on
		LEDOn(2);
		//delay
		Delay(3000000);
		//led 2 off
		LEDOff(2);
	}
  }
}