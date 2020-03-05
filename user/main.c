



#include "F28x_Project.h"
#include "device.h"
#include "math.h"

__interrupt void cpuTimer2ISR(void);


void main(void)
{

    Device_init();

    Device_initGPIO();

    Interrupt_initModule();

    Interrupt_initVectorTable();

    bsp_LedInit();

    InitPieVectTable();

    EALLOW;
    PieVectTable.TIMER2_INT = &cpuTimer2ISR;
    EDIS;

    InitCpuTimers();

    ConfigCpuTimer(&CpuTimer2, 100, 100000);

    CpuTimer2Regs.TCR.all = 0x4000;

    IER |= M_INT14;

    EINT;
    ERTM;

    for(;;)
    {
        bsp_LedCtrl(RUN,Toggle);
        DEVICE_DELAY_US(100000);
        bsp_LedCtrl(RUN,Toggle);
        DEVICE_DELAY_US(100000);

    }


}

__interrupt void cpuTimer2ISR(void)
{
    //
    // The CPU acknowledges the interrupt
    //
    CpuTimer2.InterruptCount++;

    bsp_LedCtrl(STATUE,Toggle);
    bsp_LedCtrl(ERROR,Toggle);
}
