#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elem, *temp;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
	{
		return (NULL);
	}

	new_elem->n = n;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_elem;

	return (new_elem);
}
