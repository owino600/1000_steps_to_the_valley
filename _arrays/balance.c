#include "main.h"
double getAverage(int arr[], int size);
int main ()
{
	int balance[10] = {109, 234, 345, 765, 5, 4, 123, 45, 87, 98};
	double avg;

	avg = getAverage (balance, 10);
	{
		printf("Average value is: %f", avg);
	}
	return (avg);
}
