#include "main.h"
int getMedian(int arr[], int size);
int main(void)
{
	int names[5] = {0, 2, 3, 4, 5};
	int median;

	median = getMedian(names, 5);
	{
		printf("the avg name is : %d", median);
	}
	return (median);
}
