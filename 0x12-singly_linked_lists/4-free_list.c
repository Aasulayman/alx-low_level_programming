#include "lists.h"

/**
 * free_list - function to free list
 * @head: head of a node
 * Return: Always 0
 */
void free_list(list_t *head)
{
list_t *new;

new = head;
while (head)
{
new = head;
head = head->next;
free(new->str);
free(new);
}
free(head)
}
