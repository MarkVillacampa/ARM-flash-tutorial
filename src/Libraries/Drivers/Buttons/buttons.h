/*
 * buttons.h
 *
 *  Created on: MAY 30, 2012
 *      Author: MMM
 */

#ifndef BUTTONS_H_
#define BUTTONS_H_
#include "STM32f10x.h"
#define BS2 				GPIO_Pin_0
#define BS3 				GPIO_Pin_1
#define BPORT				GPIOC
#define BPORTCLK			RCC_APB2Periph_GPIOC
void ButtonsInit(void);
uint32_t ButtonRead(GPIO_TypeDef* Button_Port, uint16_t Button);
#endif /* BUTTONS_H_ */
