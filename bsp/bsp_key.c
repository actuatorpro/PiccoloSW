/*
 * bsp_key.c
 *
 *  Created on: 2020Äê2ÔÂ27ÈÕ
 *      Author: Administrator
 */


#include "F28x_Project.h"
#include "device.h"


void bsp_KeyInit(void)

{

    EALLOW;

    GpioCtrlRegs.GPADIR.bit.GPIO14 = 0;
    GpioCtrlRegs.GPACTRL.bit.QUALPRD2 = 1;
    GpioCtrlRegs.GPAQSEL1.bit.GPIO14 = 2;
    EDIS;




}

void bsp_TimerInit(void)
{

    EALLOW;

    CpuTimer0Regs.PRD.all = 0xFFFFFFFF;


    EDIS;
}



