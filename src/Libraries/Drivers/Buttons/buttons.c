/*
 * buttons.c
 *
 *  Created on: MAY 30, 2012
 *      Author: MMM
 */

#include "buttons.h"
void ButtonsInit(void)
{
  //GPIO structure used to initialize Button pins
  GPIO_InitTypeDef GPIO_InitStructure;
  //Enable clock on APB2 pripheral bus where buttons are connected
  RCC_APB2PeriphClockCmd(BPORTCLK,  ENABLE);
  //select pins to initialize S2 and S3 buttons
  GPIO_InitStructure.GPIO_Pin = BS2|BS3;
  //select pull-up input mode
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
  //select GPIO speed
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(BPORT, &GPIO_InitStructure);
}
uint32_t ButtonRead(GPIO_TypeDef* Button_Port, uint16_t Button)
{
  return !GPIO_ReadInputDataBit(Button_Port, Button);
}
