#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head node
 * @index: the index of the nth node to return
 *
 * Return: the address of the nth node if found, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t index_count = 0;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (head != NULL && index_count < index)
	{
		head = head->next;
		index_count++;
	}


	return (head);
}
