#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list of your code
 * @head: double pointer to the list_t
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails or dont work
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new;
while (str[len])
len++;
new = malloc(sizeof(list_t));
if (!new)
return (NULL);
new->str = strdup(str);
new->next = (*head);
(*head) = new;
new->len = len;
return (*head);
}
