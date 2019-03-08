#line 1 "D:/Clicks_git/T/Tilt_2_click/SW/example/c/ARM/STM/Click_Tilt2_STM.c"
#line 1 "d:/clicks_git/t/tilt_2_click/sw/example/c/arm/stm/click_tilt2_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/t/tilt_2_click/sw/example/c/arm/stm/click_tilt2_config.h"
#line 1 "d:/clicks_git/t/tilt_2_click/sw/example/c/arm/stm/click_tilt2_types.h"
#line 1 "d:/clicks_git/t/tilt_2_click/sw/library/__tilt2_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 57 "d:/clicks_git/t/tilt_2_click/sw/library/__tilt2_driver.h"
extern const uint8_t _TILT2_TILT_DETECTION ;
extern const uint8_t _TILT2_TILT_NO_DETECTION ;
#line 78 "d:/clicks_git/t/tilt_2_click/sw/library/__tilt2_driver.h"
void tilt2_gpioDriverInit( const uint8_t*  gpioObj);
#line 87 "d:/clicks_git/t/tilt_2_click/sw/library/__tilt2_driver.h"
uint8_t tilt2_tiltDetection();
#line 30 "D:/Clicks_git/T/Tilt_2_click/SW/example/c/ARM/STM/Click_Tilt2_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
 Delay_100ms();
}

void applicationInit()
{
 tilt2_gpioDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO );
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
