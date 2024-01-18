#include "lists.h"
/**
 * add_nodeint_end - node at the end of a linked list
 * @head: pointer to 1st node in the list
 * @n: data to insert the new node created
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (*head);
}