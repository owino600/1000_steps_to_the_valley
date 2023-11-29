#include <stdio.h>
#include <cs50.h>

const int N = 3;

float average (int array[]);

int main(void)
{
	int scores [N]; /*initializing the size of the array */
	int i; /* creating a variable of size int/ 4 bites */

	for (i = 0; i < N; i++);
	{
		scores[i] = get_int("score:");
	}
	printf("Average: %f\n", average(scores));
}

float average(int array[])
{
	int sum = 0;
	int i;

	for (i = 0; i < N; i++)
	{
		sum += array[N];
	}
	return sum / (float) N;
}
