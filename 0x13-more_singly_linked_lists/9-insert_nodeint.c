#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at given index
 * @head: head pointer
 * @idx: index of the list
 * @n: data for new node
 * Return: address to new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *n_node, *tmp;

	if (head == NULL)
		return (NULL);

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = n_node;
		n_node->next = NULL;
		n_node->n = n;
		return (n_node);
	}

	if (idx == 0)
	{
		n_node->next = *head;
		n_node->n = n;
		*head = n_node;
		return (n_node);
	}

	tmp = *head;
	while (i < idx)
	{
		tmp = tmp->next;
		i++;
	}

	n_node->n = n;
	n_node->next = tmp->next;
	tmp->next = n_node;
	return (n_node);
}
