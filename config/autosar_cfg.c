/* Copyright(C) 2013, GaInOS-TK by Fan Wang. All rights reserved.
 * Generated by GaInOS-TK Studio at 2013-08-06:20-46-17.
 * Don't Modify it by hand.
 * Email: parai@foxmail.com
 * URL: https://github.com/parai/gainos-tk  && http://hi.baidu.com/parai
 */

#include "autosar_os.h"

#if(cfgAR_SCHEDTBL_NUM > 0)

LOCAL void knl_schedule_table_dummy_action(void){ /* for final delay only */ }

LOCAL void vSchedTbl_0_ExpiryPoint0_Action(void)
{
	(void)ActivateTask(vTask0);
}
LOCAL void vSchedTbl_0_ExpiryPoint1_Action(void)
{
	(void)ActivateTask(vTask1);
}
LOCAL void vSchedTbl_0_ExpiryPoint2_Action(void)
{
	(void)ActivateTask(vTask2);
}
LOCAL void vSchedTbl_0_ExpiryPoint3_Action(void)
{
	(void)ActivateTask(vTask3);
}
LOCAL void vSchedTbl_0_ExpiryPoint4_Action(void)
{
	(void)ActivateTask(vTask4);
}
LOCAL void vSchedTbl_0_ExpiryPoint5_Action(void)
{
	(void)ActivateTask(vTask5);
}
LOCAL const ScheduleTableExpiryPointType vSchedTbl_0_ExpiryPointList[] = 
{
	{ 10 , vSchedTbl_0_ExpiryPoint0_Action },
	{ 10 , vSchedTbl_0_ExpiryPoint1_Action },
	{ 10 , vSchedTbl_0_ExpiryPoint2_Action },
	{ 10 , vSchedTbl_0_ExpiryPoint3_Action },
	{ 10 , vSchedTbl_0_ExpiryPoint4_Action },
	{ 10 , vSchedTbl_0_ExpiryPoint5_Action },
};
LOCAL void vSchedTbl_1_ExpiryPoint0_Action(void)
{
	(void)SetEvent(vTask0,vTask0Event0);
}
LOCAL void vSchedTbl_1_ExpiryPoint1_Action(void)
{
	(void)SetEvent(vTask1,vTask1Event0);
}
LOCAL void vSchedTbl_1_ExpiryPoint2_Action(void)
{
	(void)SetEvent(vTask2,vTask2Event0);
}
LOCAL void vSchedTbl_1_ExpiryPoint3_Action(void)
{
	(void)SetEvent(vTask3,vTask3Event0);
}
LOCAL void vSchedTbl_1_ExpiryPoint4_Action(void)
{
	(void)SetEvent(vTask4,vTask4Event0);
}
LOCAL void vSchedTbl_1_ExpiryPoint5_Action(void)
{
	(void)SetEvent(vTask5,vTask5Event0);
}
LOCAL const ScheduleTableExpiryPointType vSchedTbl_1_ExpiryPointList[] = 
{
	{ 10 , vSchedTbl_1_ExpiryPoint0_Action },
	{ 10 , vSchedTbl_1_ExpiryPoint1_Action },
	{ 10 , vSchedTbl_1_ExpiryPoint2_Action },
	{ 10 , vSchedTbl_1_ExpiryPoint3_Action },
	{ 10 , vSchedTbl_1_ExpiryPoint4_Action },
	{ 10 , vSchedTbl_1_ExpiryPoint5_Action },
	{ 10 , knl_schedule_table_dummy_action }
};
EXPORT const T_GSCHEDTBL knl_gschedtbl_table[] = 
{
	GenSchedTblInfo(vSchedTbl_0, SystemTimer, EXPLICIT, 6, TRUE, 60, 2, 1, 1),
	GenSchedTblInfo(vSchedTbl_1, SystemTimer, EXPLICIT, 7, TRUE, 70, 2, 2, 0),
};

#endif /* (cfgAR_SCHEDTBL_NUM > 0) */

