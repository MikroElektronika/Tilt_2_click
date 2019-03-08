/*
    __tilt2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __tilt2_driver.h
@brief    Tilt2 Driver
@mainpage Tilt2 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   TILT2
@brief      Tilt2 Click Driver
@{

| Global Library Prefix | **TILT2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **dec 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _TILT2_H_
#define _TILT2_H_

/** 
 * @macro T_TILT2_P
 * @brief Driver Abstract type 
 */
#define T_TILT2_P    const uint8_t*

/** @defgroup TILT2_COMPILE Compilation Config */              /** @{ */

//  #define   __TILT2_DRV_SPI__                            /**<     @macro __TILT2_DRV_SPI__  @brief SPI driver selector */
//  #define   __TILT2_DRV_I2C__                            /**<     @macro __TILT2_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __TILT2_DRV_UART__                           /**<     @macro __TILT2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup TILT2_VAR Variables */                           /** @{ */

extern const uint8_t _TILT2_TILT_DETECTION    ;
extern const uint8_t _TILT2_TILT_NO_DETECTION ;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup TILT2_INIT Driver Initialization */              /** @{ */

#ifdef   __TILT2_DRV_SPI__
void tilt2_spiDriverInit(T_TILT2_P gpioObj, T_TILT2_P spiObj);
#endif
#ifdef   __TILT2_DRV_I2C__
void tilt2_i2cDriverInit(T_TILT2_P gpioObj, T_TILT2_P i2cObj, uint8_t slave);
#endif
#ifdef   __TILT2_DRV_UART__
void tilt2_uartDriverInit(T_TILT2_P gpioObj, T_TILT2_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void tilt2_gpioDriverInit(T_TILT2_P gpioObj);
                                                                       /** @} */
/** @defgroup TILT2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Tilt detection
 *
 * @retval _TILT2_TILT_DETECTION (detected)  or  _TILT2_TILT_NO_DETECTION (no detected)
 */
uint8_t tilt2_tiltDetection();

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Tilt2_STM.c
    @example Click_Tilt2_TIVA.c
    @example Click_Tilt2_CEC.c
    @example Click_Tilt2_KINETIS.c
    @example Click_Tilt2_MSP.c
    @example Click_Tilt2_PIC.c
    @example Click_Tilt2_PIC32.c
    @example Click_Tilt2_DSPIC.c
    @example Click_Tilt2_AVR.c
    @example Click_Tilt2_FT90x.c
    @example Click_Tilt2_STM.mbas
    @example Click_Tilt2_TIVA.mbas
    @example Click_Tilt2_CEC.mbas
    @example Click_Tilt2_KINETIS.mbas
    @example Click_Tilt2_MSP.mbas
    @example Click_Tilt2_PIC.mbas
    @example Click_Tilt2_PIC32.mbas
    @example Click_Tilt2_DSPIC.mbas
    @example Click_Tilt2_AVR.mbas
    @example Click_Tilt2_FT90x.mbas
    @example Click_Tilt2_STM.mpas
    @example Click_Tilt2_TIVA.mpas
    @example Click_Tilt2_CEC.mpas
    @example Click_Tilt2_KINETIS.mpas
    @example Click_Tilt2_MSP.mpas
    @example Click_Tilt2_PIC.mpas
    @example Click_Tilt2_PIC32.mpas
    @example Click_Tilt2_DSPIC.mpas
    @example Click_Tilt2_AVR.mpas
    @example Click_Tilt2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __tilt2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */