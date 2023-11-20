#include "lists.h"
/**
 * listint_len - returns num of element in a linked lists
 * @s: pointer to the 1st node of the linked list
 * return: number of node
 */
size_t listint_len(const listint_t *s)
{
	size_t nodenum = 0;

	while (s)
	{
		nodenum++;
		s = s->next;
	}
	return (nodenum);
}
