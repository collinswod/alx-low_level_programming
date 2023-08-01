#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp_ptr;

	(void)temp_ptr;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp_ptr = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp_ptr->next != NULL)
		{
			temp_ptr = temp_ptr->next;
		}
		temp_ptr->next = new;
	}

	return (*head);
}
