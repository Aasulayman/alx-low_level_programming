#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - function to add in single link list
 * @head: head of node
 * @n: parameter of integer data
 * Return: address to new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *n_node;
n_node = *head;
*head = malloc(sizeof(listint_t));
if (!*head)
return (NULL);

else
(*head)->n = n;
(*head)->next = n_node;
return (*head);
}
