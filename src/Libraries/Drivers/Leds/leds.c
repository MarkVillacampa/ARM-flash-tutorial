/*
 * leds.c
 *
 *  Created on: MAY 30, 2012
 *      Author: MMM
 */
#include "leds.h"

void LEDsInit(void)
{
  //GPIO structure used to initialize LED port
  GPIO_InitTypeDef GPIO_InitStructure;
  //Enable clock on APB2 pripheral bus where LEDs are connected
  RCC_APB2PeriphClockCmd(LEDPORTCLK,  ENABLE);
  //select pins to initialize LED
  GPIO_InitStructure.GPIO_Pin = LED1|LED2;
  //select output push-pull mode
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  //select GPIO speed
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(LEDPORT, &GPIO_InitStructure);
  //initially LEDs off
  GPIO_SetBits(LEDPORT, LED1|LED2);
}
void LEDOn(uint32_t LED_n)
{
  if (LED_n==1)
  {
	  GPIO_ResetBits(LEDPORT, LED1);
  }
  if (LED_n==2)
  {
	  GPIO_ResetBits(LEDPORT, LED2);
  }
}
void LEDOff(uint32_t LED_n)
{
  if (LED_n==1)
  {
	  GPIO_SetBits(LEDPORT, LED1);
  }
  if (LED_n==2)
  {
	  GPIO_SetBits(LEDPORT, LED2);
  }
}
void LEDToggle(uint32_t LED_n)
{
  if (LED_n==1)
  {
	  if(GPIO_ReadOutputDataBit(LEDPORT, LED1))  //toggle led
	  {
		  GPIO_ResetBits(LEDPORT, LED1); //set to zero
	  }
	     else
	     {
	    	 GPIO_SetBits(LEDPORT, LED1);//set to one
	     }
  }
  if (LED_n==2)
  {
	  if(GPIO_ReadOutputDataBit(LEDPORT, LED2))  //toggle led
	  {
		  GPIO_ResetBits(LEDPORT, LED2); //set to zero
	  }
	     else
	     {
	    	 GPIO_SetBits(LEDPORT, LED2);//set to one
	     }
  }
}
