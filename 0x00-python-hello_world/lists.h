#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @f: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int f;
	struct listint_s *next;
} listint_t;

int check_cycle(listint_t *l);

#endif /* LISTS_H */
