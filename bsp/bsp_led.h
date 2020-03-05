/*
 * bsp_led.h
 *
 *  Created on: 2020Äê2ÔÂ24ÈÕ
 *      Author: Administrator
 */

#ifndef USER_BSP_LED_H_
#define USER_BSP_LED_H_

#define LED0        22
#define LED1        27
#define LED2        15
#define LED3        24
#define LED4        31
#define LEDR        23
#define LEDG        34
#define STATUE      14
#define RUN         15
#define ERROR       32

#define On          1
#define Off         0
#define Toggle      2


void bsp_LedCtrl(uint32_t pin, uint32_t outVal);
void bsp_LedInit(void);




#endif /* USER_BSP_LED_H_ */
