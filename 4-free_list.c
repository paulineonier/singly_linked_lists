#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list list_t
 * @head: pointer to the head, star of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
