#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head node of the list
 * @str: string to be added in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t len = 0;
	list_t *new_node, *last_node;

	/* Count the length of the string */
	while (str && str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Find the last node in the list */
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		/* Insert the new node at the end */
		last_node->next = new_node;
	}

	return (new_node);
}
