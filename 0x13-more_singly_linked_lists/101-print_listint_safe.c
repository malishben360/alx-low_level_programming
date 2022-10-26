#include "lists.h"

/**
  * print_listint_safe - prints the address and data of each node
  * @head: pointer to the first node of the linked list
  *
  * Return: Number of nodes in the linked list.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr;

	if (head == NULL)
		exit(98);

	ptr = head;
	while (ptr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (ptr->n == 0)
		{
			if (ptr->next != NULL)
				printf("-> [%p] %d\n", (void *)ptr->next, ptr->next->n);
			ptr = NULL;
		}
		else
		{
			ptr = ptr->next;
		}
	}
	return (count);
}
