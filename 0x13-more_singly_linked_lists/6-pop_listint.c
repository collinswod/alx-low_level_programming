#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h_ptr;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h_ptr = current->next;

	free(current);

	*head = h_ptr;

	return (head_node);
}
