
#include "F28x_Project.h"
#include "device.h"


void bsp_LedCtrl(uint32_t pin, uint32_t outVal)
{

    switch(outVal)
    {
    case 0:
        GPIO_writePin(pin,0);
        break;
    case 1:
        GPIO_writePin(pin,1);
        break;
    case 2:
        GPIO_togglePin(pin);
        break;
    default:
        break;
    }

}


void bsp_LedInit(void)
{
    GPIO_setPadConfig(23, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(23, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(34, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(34, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(22, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(22, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(27, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(27, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(24, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(24, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(31, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(31, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(15, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(15, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(14, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(14, GPIO_DIR_MODE_OUT);
    GPIO_setPadConfig(32, GPIO_PIN_TYPE_STD);
    GPIO_setDirectionMode(32, GPIO_DIR_MODE_OUT);
}
