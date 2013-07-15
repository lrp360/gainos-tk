/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-07-15:21-35-21.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */


#include "osek_os.h"
#include "knl_event.h"
#include <stdio.h>
GenTaskStack(vTask0);
GenTaskStack(vTask1);
GenTaskStack(vTask2);
GenTaskStack(vTask3);
GenTaskStack(vTask4);
GenTaskStack(vTask5);
GenTaskStack(vTaskStart);
EXPORT const T_GTSK	knl_gtsk_table[cfgOSEK_TASK_NUM]=
{
	GenTaskInfo(vTask0,vTask0Mode|PREEMTABLE,ID_vTask0Event,vTask0Pri),
	GenTaskInfo(vTask1,vTask1Mode|PREEMTABLE,ID_vTask1Event,vTask1Pri),
	GenTaskInfo(vTask2,vTask2Mode|PREEMTABLE,ID_vTask2Event,vTask2Pri),
	GenTaskInfo(vTask3,vTask3Mode|PREEMTABLE,ID_vTask3Event,vTask3Pri),
	GenTaskInfo(vTask4,vTask4Mode|PREEMTABLE,ID_vTask4Event,vTask4Pri),
	GenTaskInfo(vTask5,vTask5Mode|PREEMTABLE,ID_vTask5Event,vTask5Pri),
	GenTaskInfo(vTaskStart,vTaskStartMode|PREEMTABLE,INVALID_EVENT,vTaskStartPri),
};

EXPORT const AlarmBaseType knl_almbase_table[cfgOSEK_COUNTER_NUM]=
{
	GenAlarmBaseInfo(32767,1,1), /* SystemTimer */
};

EXPORT const PRI knl_gres_table[cfgOSEK_RESOURCE_NUM]=
{
	/* ceilpri */ RES_SCHEDULERPri,  /* RES_SCHEDULER */
};

