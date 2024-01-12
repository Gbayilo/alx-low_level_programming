#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: the head node
 *
 * Return: the number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	if (h == NULL)
		return (num_of_nodes);
	while (h != NULL)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
