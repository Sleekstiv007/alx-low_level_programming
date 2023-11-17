#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head:linked list.
 * @str:store in the list.
 * Return:head address.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t b = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[b])
		b++;

	new->str = strdup(str);
	new->len = b;
	new->next = *head;
	*head = new;

	return (*head);
}
