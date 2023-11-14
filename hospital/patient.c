#include "hosp.h"
struct patient
{
	int patientno;
	char patient_name [32];
	int phoneno, emergency_calls, ma;
	char gender;
};
void printpatient(struct patient e1)
{
	printf("Patient's  form %s:\n", e1.patient_name);
	printf("Patient number: %d\n", e1.patientno);
	printf("Phone Number: %d\n", e1.phoneno);
	printf("Emergency Calls: %d\n", e1.emergency_calls);
	printf("Gender: %d\n", e1.gender);
	printf("Medical Allowance: %d\n", e1.ma);
	return;
}
void display(struct patient e1)
{
	printf("%d \t %s \t %d \t %d \t %d \t %d\n", e1.patientno, e1.patient_name, e1.phoneno, e1.emergency_calls, e1.gender, e1.ma);
	return;
}

