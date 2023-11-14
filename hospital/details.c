#include "hosp.h"
int print_details(int argc, const char * argv[])
{
	int i, ch, num;
	int choice, update, updateChoice;
	struct patient *e1;
	printf("Enter the patient's number");
	puts("%d", &num);
	e1 = malloc (sizeof(struct patient) * num);
