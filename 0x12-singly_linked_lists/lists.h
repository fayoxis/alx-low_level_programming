#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length(l) of the string
 * @next: points to the next node in code
 *
 * Description: singly linked list node structure
 * for the project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
int _strlen(const char *s);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
