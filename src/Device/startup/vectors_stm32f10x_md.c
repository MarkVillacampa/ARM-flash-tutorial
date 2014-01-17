/****************************************************************************
*  Copyright (c) 2011 by Michael Fischer. All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*  
*  1. Redistributions of source code must retain the above copyright 
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the 
*     documentation and/or other materials provided with the distribution.
*  3. Neither the name of the author nor the names of its contributors may 
*     be used to endorse or promote products derived from this software 
*     without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL 
*  THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
*  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
*  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
*  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF 
*  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF 
*  SUCH DAMAGE.
*
****************************************************************************
*  History:
*
*  09.04.2011  mifi  First Version for the STM32-P103
****************************************************************************/
#define __VECTORS_STM32F10X_MD_C__

/*=========================================================================*/
/*  DEFINE: All extern Data                                                */
/*=========================================================================*/
extern unsigned long _estack;

/*=========================================================================*/
/*  DEFINE: Prototypes                                                     */
/*=========================================================================*/
void ResetHandler(void);

void NMI_Handler (void) __attribute__((weak));
void HardFault_Handler (void) __attribute__((weak));
void MemManage_Handler (void) __attribute__((weak));
void BusFault_Handler (void) __attribute__((weak));
void UsageFault_Handler (void) __attribute__((weak));
void SVC_Handler (void) __attribute__((weak));
void DebugMon_Handler (void) __attribute__((weak));
void PendSV_Handler (void) __attribute__((weak));
void SysTick_Handler (void) __attribute__((weak));

void WWDG_IRQHandler (void) __attribute__((weak));
void PVD_IRQHandler (void) __attribute__((weak));
void TAMPER_IRQHandler (void) __attribute__((weak));
void RTC_IRQHandler (void) __attribute__((weak));
void FLASH_IRQHandler (void) __attribute__((weak));
void RCC_IRQHandler (void) __attribute__((weak));
void EXTI0_IRQHandler (void) __attribute__((weak));
void EXTI1_IRQHandler (void) __attribute__((weak));
void EXTI2_IRQHandler (void) __attribute__((weak));
void EXTI3_IRQHandler (void) __attribute__((weak));
void EXTI4_IRQHandler (void) __attribute__((weak));
void DMA1_Channel1_IRQHandler (void) __attribute__((weak));
void DMA1_Channel2_IRQHandler (void) __attribute__((weak));
void DMA1_Channel3_IRQHandler (void) __attribute__((weak));
void DMA1_Channel4_IRQHandler (void) __attribute__((weak));
void DMA1_Channel5_IRQHandler (void) __attribute__((weak));
void DMA1_Channel6_IRQHandler (void) __attribute__((weak));
void DMA1_Channel7_IRQHandler (void) __attribute__((weak));
void ADC1_2_IRQHandler (void) __attribute__((weak));
void USB_HP_CAN_TX_IRQHandler (void) __attribute__((weak));
void USB_LP_CAN_RX0_IRQHandler (void) __attribute__((weak));
void CAN_RX1_IRQHandler (void) __attribute__((weak));
void CAN_SCE_IRQHandler (void) __attribute__((weak));
void EXTI9_5_IRQHandler (void) __attribute__((weak));
void TIM1_BRK_IRQHandler (void) __attribute__((weak));
void TIM1_UP_IRQHandler (void) __attribute__((weak));
void TIM1_TRG_COM_IRQHandler (void) __attribute__((weak));
void TIM1_CC_IRQHandler (void) __attribute__((weak));
void TIM2_IRQHandler (void) __attribute__((weak));
void TIM3_IRQHandler (void) __attribute__((weak));
void TIM4_IRQHandler (void) __attribute__((weak));
void I2C1_EV_IRQHandler (void) __attribute__((weak));
void I2C1_ER_IRQHandler (void) __attribute__((weak));
void I2C2_EV_IRQHandler (void) __attribute__((weak));
void I2C2_ER_IRQHandler (void) __attribute__((weak));
void SPI1_IRQHandler (void) __attribute__((weak));
void SPI2_IRQHandler (void) __attribute__((weak));
void USART1_IRQHandler (void) __attribute__((weak));
void USART2_IRQHandler (void) __attribute__((weak));
void USART3_IRQHandler (void) __attribute__((weak));
void EXTI15_10_IRQHandler (void) __attribute__((weak));
void RTCAlarm_IRQHandler (void) __attribute__((weak));
void USBWakeUp_IRQHandler (void) __attribute__((weak));

/*=========================================================================*/
/*  DEFINE: All code exported                                              */
/*=========================================================================*/
/*
 * This is our vector table.
 */
__attribute__ ((section(".vectors"), used))
void (* const gVectors[])(void) = 
{
   (void (*)(void))((unsigned long)&_estack),
   ResetHandler,
   NMI_Handler,
   HardFault_Handler,
   MemManage_Handler,
   BusFault_Handler,
   UsageFault_Handler,
   0, 0, 0, 0,
   SVC_Handler,
   DebugMon_Handler,
   0,
   PendSV_Handler,
   SysTick_Handler,
   
   WWDG_IRQHandler,
   PVD_IRQHandler,
   TAMPER_IRQHandler,
   RTC_IRQHandler,
   FLASH_IRQHandler,
   RCC_IRQHandler,
   EXTI0_IRQHandler,
   EXTI1_IRQHandler,
   EXTI2_IRQHandler,
   EXTI3_IRQHandler,
   EXTI4_IRQHandler,
   DMA1_Channel1_IRQHandler,
   DMA1_Channel2_IRQHandler,
   DMA1_Channel3_IRQHandler,
   DMA1_Channel4_IRQHandler,
   DMA1_Channel5_IRQHandler,
   DMA1_Channel6_IRQHandler,
   DMA1_Channel7_IRQHandler,
   ADC1_2_IRQHandler,
   USB_HP_CAN_TX_IRQHandler,
   USB_LP_CAN_RX0_IRQHandler,
   CAN_RX1_IRQHandler,
   CAN_SCE_IRQHandler,
   EXTI9_5_IRQHandler,
   TIM1_BRK_IRQHandler,
   TIM1_UP_IRQHandler,
   TIM1_TRG_COM_IRQHandler,
   TIM1_CC_IRQHandler,
   TIM2_IRQHandler,
   TIM3_IRQHandler,
   TIM4_IRQHandler,
   I2C1_EV_IRQHandler,
   I2C1_ER_IRQHandler,
   I2C2_EV_IRQHandler,
   I2C2_ER_IRQHandler,
   SPI1_IRQHandler,
   SPI2_IRQHandler,
   USART1_IRQHandler,
   USART2_IRQHandler,
   USART3_IRQHandler,
   EXTI15_10_IRQHandler,
   RTCAlarm_IRQHandler,
   USBWakeUp_IRQHandler
}; /* gVectors */

/*
 * And here are the weak interrupt handlers.
 */
void NMI_Handler (void) { while(1); }
void HardFault_Handler (void) { while(1); }
void MemManage_Handler (void) { while(1); }
void BusFault_Handler (void) { while(1); }
void UsageFault_Handler (void) { while(1); }
void SVC_Handler (void) { while(1); }
void DebugMon_Handler (void) { while(1); }
void PendSV_Handler (void) { while(1); }
void SysTick_Handler (void) { while(1); }

void WWDG_IRQHandler (void) { while(1); }
void PVD_IRQHandler (void) { while(1); }
void TAMPER_IRQHandler (void) { while(1); }
void RTC_IRQHandler (void) { while(1); }
void FLASH_IRQHandler (void) { while(1); }
void RCC_IRQHandler (void) { while(1); }
void EXTI0_IRQHandler (void) { while(1); }
void EXTI1_IRQHandler (void) { while(1); }
void EXTI2_IRQHandler (void) { while(1); }
void EXTI3_IRQHandler (void) { while(1); }
void EXTI4_IRQHandler (void) { while(1); }
void DMA1_Channel1_IRQHandler (void) { while(1); }
void DMA1_Channel2_IRQHandler (void) { while(1); }
void DMA1_Channel3_IRQHandler (void) { while(1); }
void DMA1_Channel4_IRQHandler (void) { while(1); }
void DMA1_Channel5_IRQHandler (void) { while(1); }
void DMA1_Channel6_IRQHandler (void) { while(1); }
void DMA1_Channel7_IRQHandler (void) { while(1); }
void ADC1_2_IRQHandler (void) { while(1); }
void USB_HP_CAN_TX_IRQHandler (void) { while(1); }
void USB_LP_CAN_RX0_IRQHandler (void) { while(1); }
void CAN_RX1_IRQHandler (void) { while(1); }
void CAN_SCE_IRQHandler (void) { while(1); }
void EXTI9_5_IRQHandler (void) { while(1); }
void TIM1_BRK_IRQHandler (void) { while(1); }
void TIM1_UP_IRQHandler (void) { while(1); }
void TIM1_TRG_COM_IRQHandler (void) { while(1); }
void TIM1_CC_IRQHandler (void) { while(1); }
void TIM2_IRQHandler (void) { while(1); }
void TIM3_IRQHandler (void) { while(1); }
void TIM4_IRQHandler (void) { while(1); }
void I2C1_EV_IRQHandler (void) { while(1); }
void I2C1_ER_IRQHandler (void) { while(1); }
void I2C2_EV_IRQHandler (void) { while(1); }
void I2C2_ER_IRQHandler (void) { while(1); }
void SPI1_IRQHandler (void) { while(1); }
void SPI2_IRQHandler (void) { while(1); }
void USART1_IRQHandler (void) { while(1); }
void USART2_IRQHandler (void) { while(1); }
void USART3_IRQHandler (void) { while(1); }
void EXTI15_10_IRQHandler (void) { while(1); }
void RTCAlarm_IRQHandler (void) { while(1); }
void USBWakeUp_IRQHandler (void) { while(1); }

/*** EOF ***/
