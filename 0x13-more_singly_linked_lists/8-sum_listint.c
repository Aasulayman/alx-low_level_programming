#include "lists.h"

/**
 * sum_listint - function that sums all data of linked list
 * @head: head pointer
 * Return: sum of all data n of linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
