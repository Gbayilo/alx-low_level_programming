#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare, *temp;
	size_t count = 0;

	tortoise = *h;
	hare = *h;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = *h;

			while (tortoise != hare)
			{
				temp = tortoise;
				tortoise = tortoise->next;
				hare = hare->next;
				count++;
				free(temp);
			}
			break;
		}
	}

	while (tortoise != NULL)
	{
		temp = tortoise;
		tortoise = tortoise->next;
		count++;
		free(temp);
	}
	*h = NULL;
	return (count);
}
