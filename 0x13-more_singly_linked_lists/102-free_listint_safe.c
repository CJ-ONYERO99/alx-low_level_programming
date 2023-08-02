#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		nodes++;
		if ((current < current->next) || (current->next == NULL))
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			*h = NULL;
			free_listint_safe(h);
			break;
		}
	}

	*h = NULL;
	return (nodes);
}
