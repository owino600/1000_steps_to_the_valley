#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct patient_s
{
	int patientno;
	char patient_name [32];
	int phoneno, emergency_calls, ma;
	char gender;
}patient_t;



#endif
