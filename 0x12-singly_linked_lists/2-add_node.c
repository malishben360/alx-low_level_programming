#include "lists.h"

/**
  * add_node - inserts a new node at the begging of a list
  * @head: head of the list
  * @str: data of the new node
  *
  * Return: Pointer to the new node(Success),
  * else NULL (FAIL).
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *ptr = NULL;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str != NULL && str[0] != '\0')
	{
		len = strlen(str);
		ptr = strdup(str);
	}
	new->str = ptr;
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
