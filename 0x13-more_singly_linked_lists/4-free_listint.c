#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to head of node
 * Return: free
 */
void free_listint(listint_t *head)
{
listint_t *node;

while (head != NULL)
{
node = head;
head = head->next;
free(node);
}
free(head);
}
