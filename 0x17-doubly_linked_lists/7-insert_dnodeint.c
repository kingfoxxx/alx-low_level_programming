#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given positions needed
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *news;
	dlistint_t *head;
	unsigned int i;

	news = NULL;
	if (idx == 0)
		news = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					news = add_dnodeint_end(h, n);
				else
				{
					news = malloc(sizeof(dlistint_t));
					if (news != NULL)
					{
						news->n = n;
						news->next = head->next;
						news->prev = head;
						head->next->prev = news;
						head->next = news;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (news);
}
