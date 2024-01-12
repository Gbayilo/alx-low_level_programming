#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
* @head: Pointer to the pointer to the head of the doubly linked list.
* @n: The value to be assigned to the new node.
*
* Return: The address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;


	if (temp == NULL)
		*head = new_node;
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}

