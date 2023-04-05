#include "lists.h"

/**
 * free_listint2 - funtion that frees a list
 * @head: head of node
 * Return: free
 */
void free_listint2(listint_t **head)
{
listint_t *node;
if (head == NULL)
return;

if (*head == NULL)
{
free(*head);
head = NULL;
return;
}
while (*head != NULL)
{
node = *head;
*head = (*head)->next;
free(node);
}
*head = NULL;
}
