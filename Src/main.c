#include "led.h"
#include "uart.h"
#include "timebase.h"

void blue_led_on(void);
void blue_led_off(void);
void red_led_on(void);
void red_led_off(void);


int main(void)
{
	RCC_Config();
	GPIO_Config();
	UART_TRANSMIT_Config();
	YTY_TIME_BASE_INIT();
	while(1)
	{
		blue_led_on();
		YTY_Delay(1);
		blue_led_off();
		YTY_Delay(1);
		red_led_on();
		YTY_Delay(1);
		//red_led_off();

	}
}


void blue_led_on(void)
{
	LED_BLUE_ON();
}

void blue_led_off(void)
{
	LED_BLUE_OFF();
}

void red_led_on(void)
{
	LED_RED_ON();
}

void red_led_off(void)
{
	LED_RED_OFF();
}




