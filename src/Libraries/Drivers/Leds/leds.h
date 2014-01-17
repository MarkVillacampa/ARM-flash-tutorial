/*
 * leds.h
 *
 *  Created on: MAY 30, 2012
 *      Author: MMM
 */

#ifndef LEDS_H_
#define LEDS_H_
#include "STM32f10x.h"
#define LED1 			GPIO_Pin_9
#define LED2 			GPIO_Pin_8
#define LEDPORT			GPIOB
#define LEDPORTCLK		RCC_APB2Periph_GPIOB
//function prototypes
void LEDsInit(void);
void LEDOn(uint32_t);
void LEDOff(uint32_t);
void LEDToggle(uint32_t);
#endif /* LEDS_H_ */
