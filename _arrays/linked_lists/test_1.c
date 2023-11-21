#include "list.h"

int main(int argc, char *argv[])
{
	int i;
	int number;
	node *list = NULL;
	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);

		node *n = malloc(sizeof(node));
			if (n == NULL)
			{
				return 1;
			}
		n->number = number;
		n->next =  NULL;
		n->next = list;
		list = n;
	}
	node *ptr = list;
	while (ptr != NULL);
	{
		printf("%i\n", ptr->number);
		ptr = ptr->next;
	}

	ptr = list;
	while (ptr != NULL);
	{
		node *next = ptr->next;
		free(ptr);
		ptr = next;
	}
	return (0);
}
