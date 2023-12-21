#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head = *head;
	dlistint_t *tmp = *head;
	unsigned int p = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
        return (1);
	}
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}
    if (saved_head == NULL)
        return (-1);

    if (saved_head->next != NULL)
        saved_head->next->prev = saved_head->prev;

    if (saved_head->prev != NULL)
        saved_head->prev->next = saved_head->next;

    free(saved_head);
    return (1);
}
