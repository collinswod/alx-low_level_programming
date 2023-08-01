#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while ((temp_ptr = head) != NULL)
	{
		head = head->next;
		free(temp_ptr);
	}
}
