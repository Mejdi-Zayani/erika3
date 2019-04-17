/* 
***Disclaimer: 

* This work (specification and/or software implementation) and the material contained in
* it, as released by AUTOSAR, is for the purpose of information only. AUTOSAR and the
* companies that have contributed to it shall not be liable for any use of the work.
* The material contained in this work is protected by copyright and other types of intellectual
* property rights. The commercial exploitation of the material contained in this
* work requires a license to such intellectual property rights.

* This work may be utilized or reproduced without any modification, in any form or by
* any means, for informational purposes only. For any other purpose, no part of the work
* may be utilized or reproduced, in any form or by any means, without permission in
* writing from the publisher.

*The work has been developed for automotive applications only. It has neither been
*developed, nor tested for non-automotive applications.
*The word AUTOSAR and the AUTOSAR logo are registered trademarks.


* More details about the Arti Tracing Macro can be
* found at https://www.autosar.org/standards/classic-platform/classic-platform-440/
* [SWArch] (Document Title: Specification of AUTOSAR Run-Time Interface)
* [AUTOSAR_SWS_ClassicPlatformARTI]



*/

#ifndef ARTI_H
#define ARTI_H

#include <stdint.h>

#define ARTI_TRACE(_contextName, _className, _instanceName, instanceParameter, _eventName, event_value) \
	(void)TraceImpl ## _ ## _className ## _ ## _eventName ## _ ## _contextName( (_instanceName), (instanceParameter), (event_value) )

#define OS_SHORT_NAME (0)
#define OS_CORE_ID (0)



/*uncomment the following line to trace all task with start event*/
//#define AR_CP_OS_TASKSCHEDULER_OsTask_Start_NOSUSP

/*uncomment the following line to trace all task with stop event*/
//#define AR_CP_OS_TASKSCHEDULER_OsTask_Stop_NOSUSP

/*uncomment the following line to trace all task with activation event*/
//#define AR_CP_OS_TASKSCHEDULER_OsTask_Activation_NOSUSP

/*uncomment the following line to trace all task with waiting event*/
//#define AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP

/*uncomment the following line to trace all task with Release event*/

//#define AR_CP_OS_TASKSCHEDULER_OsTask_Release_NOSUSP

/*uncomment the following line to trace all task with Resuming event*/

//#define AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_NOSUSP

/*uncomment the following line to trace all ISR2 with start event*/

//#define AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_NOSUSP

/*uncomment the following line to trace all ISR2 with stop event*/

//#define AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP

/*uncomment the following line to trace all ISR1 with start event*/

//#define AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_NOSUSP

/*uncomment the following line to trace all ISR1 with stop event*/

//#define AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_NOSUSP


/********************************************************************/
/* AR_CP_OS_TASKSCHEDULER */

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

/*  AR_CP_OS_CAT2DISPATCHER */


void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);


/*  AR_CP_OS_CAT1DISPATCHER **not supported */

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value);



#endif