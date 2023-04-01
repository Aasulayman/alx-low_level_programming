#include "lists.h"

/**
 * add_node - function to add node
 * @head : parameter for head of node
 * @str: string of node
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
int length = 0;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

while (str[length])
length++;

new->len = length;
new->str = strdup(str);
new->next = *head;
*head = new;
return (new);
}
