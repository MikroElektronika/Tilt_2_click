/*
Example for Tilt2 Click

    Date          : dec 2018.
    Author        : Katarina Perendic

Test configuration dsPIC :
    
    MCU                : P33FJ256GP710A
    Dev. Board         : EasyPIC Fusion v7
    dsPIC Compiler ver : v7.1.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Sets INT pin as INPUT for tilt detection
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Tilt detection, if the tilt is detected, the message is logs on USBUART.

*/

#include "Click_Tilt2_types.h"
#include "Click_Tilt2_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_logInit( _LOG_USBUART_A, 9600 );
    mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
    Delay_100ms();
}

void applicationInit()
{
    tilt2_gpioDriverInit( (T_TILT2_P)&_MIKROBUS1_GPIO );
}

void applicationTask()
{
    uint8_t tilt;
    
    tilt = tilt2_tiltDetection();
    if(tilt == _TILT2_TILT_DETECTION)
    {
        mikrobus_logWrite(" Tilt detection.. ", _LOG_LINE);
        Delay_ms( 300 );
    }
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}