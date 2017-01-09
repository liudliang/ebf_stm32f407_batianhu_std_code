#ifndef __ADC_H
#define	__ADC_H


#include "stm32f4xx.h"

// RHEOSTAT: 滑动变阻器/电位器

// ADC DR寄存器宏定义，ADC转换后的数字值则存放在这里
#define RHEOSTAT_ADC_DR_ADDR    ((u32)ADC1+0x4c)

// ADC IO宏定义
#define RHEOSTAT_ADC_GPIO_PORT    GPIOB
#define RHEOSTAT_ADC_GPIO_PIN     GPIO_Pin_1
#define RHEOSTAT_ADC_GPIO_CLK     RCC_AHB1Periph_GPIOB

// ADC 序号宏定义
#define RHEOSTAT_ADC              ADC1
#define RHEOSTAT_ADC_CLK          RCC_APB2Periph_ADC1
#define RHEOSTAT_ADC_CHANNEL      ADC_Channel_9

// ADC DMA 通道宏定义，这里我们使用DMA传输
#define RHEOSTAT_ADC_DMA_CLK      RCC_AHB1Periph_DMA2
#define RHEOSTAT_ADC_DMA_CHANNEL  DMA_Channel_0
#define RHEOSTAT_ADC_DMA_STREAM   DMA2_Stream0   

void Rheostat_Init(void);


#endif /* __ADC_H */

