#include "lists.h"
/**
 * list_len - returns the number of elements in a list.
 * @q: singly linked list.
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *q)
{
	size_t count;

	count = 0;
	while (q != NULL)
	{
		q = q->next;
		count++;
	}

	return (count);
}
