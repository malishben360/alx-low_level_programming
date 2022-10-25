#include "lists.h"

/**
  * get_nodeint_at_index - search for node in a linked list
  * @head: pointer to the first node
  * @index: position of the node
  *
  * Return: Pointer of a node, or NULL if node doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	i = 0;
	ptr = head;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
