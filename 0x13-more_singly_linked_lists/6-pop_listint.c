#include "lists.h"

/**
 * pop_listint - function to delete head of a node
 * @head: head of node
 * @n : data for node struct
 * Return: empty 0
 */
int pop_listint(listint_t **head)
{
listint_t *n_node;
int n;

if (*head == NULL)
return (0);
n = (*head)->n;
n_node = (*head)->next;
free(*head);
(*head) = n_node;
return (n);
}
