#include "lists.h"
/**
 * list_len - function for size of singly linked list
 * @h: parameter for head of node
 * Return: number of node sizes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
