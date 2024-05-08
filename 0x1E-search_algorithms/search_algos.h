#endif /* _search_algos_ */
#ifndef _search_algos_
#define _search_algos_

#include <stddef.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - this singly linked list
 * @n: this is the Integer
 * @index:this is  Index of the node in the list
 * @next: this is Pointer to the next node
 *
 * Description: describes the singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - this is Singly linked list
 * @n: this is the Integer
 * @index: this is the Index of the node in the list
 * @next:this is the  Pointer to the next node
 * @express: exoress the Pointer to the next node in the express lane
 * Description: describe singly linked list node structure
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
