#include "lists.h"

/**
 * get_nodeint_at_index - function to get a node of list
 * @head: A pointer to node struct
 * @index: index of the node
 * Return: node at specified index or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (head)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
