#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list (handles loops)
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *loop_start = NULL;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current >= loop_start)
		{
			if (loop_start == NULL)
				loop_start = head;
			else
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				exit(98);
			}
		}

		current = current->next;
	}

	return (count);
}
