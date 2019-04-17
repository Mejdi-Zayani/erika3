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

#include <stdint.h>
#include "Arti.h"



/* Stubs for intrinsics */
#define __disable() ((void)(0))
#define __enable() ((void)(0))



void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	__disable();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_NOSUSP(instanceName,
		instanceParameter, event_value);

	__enable();

}


void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here


}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	__disable();
	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);
	__enable();
}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Resuming_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here
}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	__disable();
	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);
	__enable();
}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}


void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here

}


void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	__disable();
	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_NOSUSP(instanceName,
		instanceParameter, event_value);
	__enable();
}


void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Activation_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here

}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{
	__disable();
	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);
	__enable();
}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{
	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here
}



void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	__disable();
	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);
	__enable();
}

void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Waiting_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();
	
}
void TraceImpl_AR_CP_OS_TASKSCHEDULER_OsTask_Release_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here

}

/**************** ISR 2  ************************/


void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	__disable();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_NOSUSP(instanceName,
		instanceParameter, event_value);

	__enable();

}

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}                                   

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here

}

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	__disable();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	__enable();

}

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here
	
}


/**************** ISR 1  ************************/


void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	__disable();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	__enable();

}

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Start_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)

{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here
}

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_SPRVSR(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	__disable();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	__enable();

}

void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_USER(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	SuspendAllInterrupts();

	TraceImpl_AR_CP_OS_CAT2DISPATCHER_OsIsr2_Stop_NOSUSP(instanceName,
		instanceParameter, event_value);

	ResumeAllInterrupts();

}
void TraceImpl_AR_CP_OS_CAT1DISPATCHER_OsIsr1_Stop_NOSUSP(
	uint32_t instanceName, uint32_t instanceParameter, uint32_t event_value)
{

	(void) instanceName;
	(void) instanceParameter;
	(void) event_value;
	// actual tracing code goes here
}
