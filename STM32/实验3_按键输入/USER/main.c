#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "key.h"
/************************************************
 ALIENTEK 精英STM32F103开发板 实验3
 按键输入实验-HAL库函数版
 技术支持：www.openedv.com
 淘宝店铺： http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

int main(void)
{
	u8 key;
	u8 mode=0;
	
    HAL_Init();                    	 	//初始化HAL库    
    Stm32_Clock_Init(RCC_PLL_MUL9);   	//设置时钟,72M
	delay_init(72);               		//初始化延时函数
	LED_Init();							//初始化LED	
	KEY_Init();							//初始化按键
	
    while(1)
    {
        key=KEY_Scan(0);            //按键扫描
        
        if(key == KEY0_PRES)     // 按 KEY0 切换模式
        {
            mode++;
            if(mode > 2) mode = 0;  // 0→1→2→0 循环
        }

		switch(mode)
		{				 
			case 0:
			LED0 = 0; LED1 = 1; delay_ms(300);
            LED0 = 1; LED1 = 0; delay_ms(300);
			break;
			case 1:
			LED0 = 0; LED1 = 0; delay_ms(300);
            LED0 = 1; LED1 = 1; delay_ms(300);
			break;
			case 2:
			LED0 = 0; delay_ms(200);
            LED1 = 0; delay_ms(200);
            LED0 = 1; delay_ms(200);
            LED1 = 1; delay_ms(200);
            break;	
		}
	}
}
