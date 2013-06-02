/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-06-02:10-28-27.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */


#ifndef _OSEK_CFG_H_
#define _OSEK_CFG_H_
/* =====================  MISC  ========================== */
#define FULL_PREEMPTIVE_SCHEDULE  0
#define MIXED_PREEMPTIVE_SCHEDULE 1
#define NONE_PREEMPTIVE_SCHEDULE  2
#define cfgOS_SCHEDULE_POLICY FULL_PREEMPTIVE_SCHEDULE
#define cfgOS_CONFORMANCE_CLASS ECC1
#define cfgOS_STATUS_LEVEL OS_STATUS_STANDARD
#define cfgOS_TK_EXTEND STD_ON
#define CHIP_MC9S12
#if defined(CHIP_MC9S12) //9s12
#define CPU_FREQUENCY        32000000 /* HZ */
#define OSC_FREQUENCY         8000000 /* HZ */
#elif defined(CHIP_STM32F1)//stm32
#define CPU_FREQUENCY        72000000 /* HZ */
#elif defined(CHIP_AT91SAM3S)
#define CPU_FREQUENCY        64000000 /* HZ */
#elif defined(CHIP_MPC56XX)
#define CPU_FREQUENCY  64000000   /* HZ */
#define OSC_FREQUENCY  8000000    /* Oscillator Clock 8MHZ */
#endif

/* App Mode */
/* =====================  TASK  ========================== */
#define cfgOSEK_MAX_PRIO 10
#define cfgOSEK_TASK_NUM  4
#define ID_vTaskInit 0
#define ID_vTaskSender 1
#define ID_vTaskReceiver 2
#define ID_vTaskMainFunction 3
#if !defined(MACROS_ONLY)
IMPORT TASK(vTaskInit);
IMPORT TASK(vTaskSender);
IMPORT TASK(vTaskReceiver);
IMPORT TASK(vTaskMainFunction);
#endif
/* =====================  EVENT ========================== */
#define ID_vTaskReceiverEvent 0
#define vTaskReceiverCanRxEvent 0x1
#define cfgOSEK_EVENTFLAG_NUM 1

/* =====================  ALARM ========================== */
#define cfgOSEK_COUNTER_NUM 1
#define ID_vSystemCounter 0
#define cfgOSEK_ALARM_NUM 3
#define ID_vAlarmSender 0
#define ID_vAlarmReceiver 1
#define ID_vAlarmMainFunction 2
#if !defined(MACROS_ONLY)
IMPORT ALARM(vAlarmSender);
IMPORT ALARM(vAlarmReceiver);
IMPORT ALARM(vAlarmMainFunction);
#endif
/*  ====================  RESOURCE ======================= */
#define cfgOSEK_RESOURCE_NUM 1
#define ID_RES_SCHEDULER 0

/*  ====================  HOOKs    ======================= */
#define cfgOS_SHUT_DOWN_HOOK 0
#define cfgOS_START_UP_HOOK  0
#endif /* _OSEK_CFG_H_ */
