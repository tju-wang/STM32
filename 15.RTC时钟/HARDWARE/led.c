#include "led.h"



//led PB5
void led_init()
{
	GPIO_InitTypeDef GPIO_InitTypeStruct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB,ENABLE);
	
	GPIO_InitTypeStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitTypeStruct.GPIO_Pin = GPIO_Pin_5;
	GPIO_InitTypeStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitTypeStruct);
	
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
}

void led_OSstatus()
{
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
	delay_ms(100);
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
	delay_ms(100);
}



