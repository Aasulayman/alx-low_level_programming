#include "lists.h"

/**
 * print_listint - function to print single list
 * @h: header of the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int n;
size_t = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
