#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - print all element of list_t
 * @h: points to the next node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

		while (current != NULL)
		{
			if (current->str == NULL)
			{
				printf("[0] (nil)\n");
			}

			else
			{
				printf("[%u] %s\n", current->len, current->str);
			}
			{
				current = current->next;
				count++;
			}
		}
		return (count);
}
