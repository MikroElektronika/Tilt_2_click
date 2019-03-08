_systemInit:
;Click_Tilt2_STM.c,30 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Tilt2_STM.c,32 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Tilt2_STM.c,33 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Tilt2_STM.c,34 :: 		mikrobus_logWrite(" --- System Init --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_Tilt2_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Tilt2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Tilt2_STM.c,35 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_Tilt2_STM.c,36 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Tilt2_STM.c,38 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Tilt2_STM.c,40 :: 		tilt2_gpioDriverInit( (T_TILT2_P)&_MIKROBUS1_GPIO );
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_tilt2_gpioDriverInit+0
;Click_Tilt2_STM.c,41 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Tilt2_STM.c,43 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Tilt2_STM.c,47 :: 		tilt = tilt2_tiltDetection();
BL	_tilt2_tiltDetection+0
;Click_Tilt2_STM.c,48 :: 		if(tilt == _TILT2_TILT_DETECTION)
CMP	R0, __TILT2_TILT_DETECTION
IT	NE
BNE	L_applicationTask0
;Click_Tilt2_STM.c,50 :: 		mikrobus_logWrite(" Tilt detection.. ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr2_Click_Tilt2_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Tilt2_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Tilt2_STM.c,51 :: 		Delay_ms( 300 );
MOVW	R7, #61055
MOVT	R7, #54
NOP
NOP
L_applicationTask1:
SUBS	R7, R7, #1
BNE	L_applicationTask1
NOP
NOP
NOP
;Click_Tilt2_STM.c,52 :: 		}
L_applicationTask0:
;Click_Tilt2_STM.c,53 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Tilt2_STM.c,55 :: 		void main()
;Click_Tilt2_STM.c,57 :: 		systemInit();
BL	_systemInit+0
;Click_Tilt2_STM.c,58 :: 		applicationInit();
BL	_applicationInit+0
;Click_Tilt2_STM.c,60 :: 		while (1)
L_main3:
;Click_Tilt2_STM.c,62 :: 		applicationTask();
BL	_applicationTask+0
;Click_Tilt2_STM.c,63 :: 		}
IT	AL
BAL	L_main3
;Click_Tilt2_STM.c,64 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
