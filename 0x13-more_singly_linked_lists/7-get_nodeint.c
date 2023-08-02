#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	temp = head;
	count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		count++;
		temp = temp->next;
	}

	return (NULL);
}
