#include "main.h"
int getMedian(int arr[], int size)
{
	int i;
	int median;
	int sum;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	median = sum / size;
	return (median);
}
