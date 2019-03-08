![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Tilt2 Click

- **CIC Prefix**  : TILT2
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : dec 2018.

---

### Software Support

We provide a library for the Tilt2 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2692/tilt-2-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains a tilt detection function.

Key functions :

- ``` uint8_t tilt2_tiltDetection() ``` - Tilt detection

**Examples Description**

The application is composed of three sections :

- System Initialization - Sets INT pin as INPUT for tilt detection
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Tilt detection, if the tilt is detected, the message is logs on USBUART.

```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2692/tilt-2-click) page.

Other mikroE Libraries used in the example:

- GPIO

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
