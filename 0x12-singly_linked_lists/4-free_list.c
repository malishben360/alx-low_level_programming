#include "lists.h"

/**
  * free_list - frees all the nodes of a given list
  * from the heap
  * @head: the first node of the list
  *
  * Return: nothing.
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		printf("Freed !");
		exit(98);
	}
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
