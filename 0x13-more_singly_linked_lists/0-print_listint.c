#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function to print single list
 * @h: header of the node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
