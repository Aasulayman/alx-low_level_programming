#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function to return number of elemnts
 * @h: head of node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
