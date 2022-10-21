#include "lists.h"

/**
  * add_node_end - inserts a new node at the end of a list
  * @head: pointer to the first node of the list
  * @str: the data for the new node
  *
  * Return: Pointer to the new node.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	char *ptr;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	ptr = strdup(str);
	len = strlen(str);
	new->str = ptr;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
