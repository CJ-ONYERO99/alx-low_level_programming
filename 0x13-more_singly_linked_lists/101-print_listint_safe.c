#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t num_nodes = 0;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		num_nodes++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			num_nodes++;
			break;
		}
	}

	if (!fast || !fast->next)
	{
		for (; slow; slow = slow->next)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			num_nodes++;
		}
	}

	return (num_nodes);
}
