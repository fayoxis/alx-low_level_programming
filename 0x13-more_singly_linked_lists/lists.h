#ifndef _S_LINK_LISTS_
#define _S_LINK_LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct listint_s - singly linked-list
 * @n: integer valve
 * @next: points the next node
 *
 * Description: singly linked-list node structure for more task
 */
typedef struct listint_s
{

int n;
struct listint_s *next;
}
listint_t;

print_listint(const listint_t *w)
size_t listint_len(const listint_t *w);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
size_t print_listint_safe(const listint_t *head);
int pop_listint(listint_t **head);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
void free_listint2(listint_t **head);

listint_t *find_listint_loop(listint_t *head);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
size_t free_listint_safe(listint_t **w);
int _putchar(char c);

#endif
