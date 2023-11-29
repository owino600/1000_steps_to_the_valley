#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i;
	int *list = malloc(3 * sizeof(int));
	if (list == NULL)
	{
		return (0);
	}
	list[0] = 1;
	list[1] = 2;
	list[2] = 3;

	/*create a new memory*/
	int *temp = realloc(4 * sizeof(int));
		if (temp == NULL)
		{
			free(list);
			return (1);
		}
	list = temp;
	list[3] = 4;

	for (i = 0; i < 3; i++)
	{
		printf("%i\n", list[i]);
	}
	free(list);
	return (0);
}
