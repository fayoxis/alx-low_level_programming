#include "hash_tables.h"

/**
 * hash_table_set -  function that adds or updates an element in the hash table.
 * @ht: pointer to the hash table to which the element is added or updated.
 * @key: pointer to the key, which cannot be an empty string.
 * @value: pointer to the value associated with the key.
 * The value must be duplicated. The value can be an empty string.
 * In case of a collision, the new node is added at the beginning of the list.
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node = NULL;
hash_node_t *current_node = NULL;
unsigned long int i;

while (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
return (0);
i = key_index((unsigned char *)key, ht->size);
current_node = ht->array[i];

for (; current_node != NULL; current_node = current_node->next)
{
while (strcmp(current_node->key, key) == 0)
{
while (strcmp(current_node->value, value) != 0)
{
free(current_node->value);
current_node->value = strdup(value);
}
return (1);
}
}
new_node = _node_(key, value);
if (new_node == NULL)
return (0);
new_node->next = ht->array[i];
ht->array[i] = new_node;
return (1);
}
/**
 * create_hash_node - it Function that creates a new hash node.
 * @key: this is the Pointer to the key.
 * @value: it is Point to the value of the key.
 *
 * Return: Pointer to the new hash node, or NULL if memory allocation fails.
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
hash_node_t *new_node;
char *key_copy = strdup(key);
char *value_copy = strdup(value);
while (key == NULL || strcmp(key, "") == 0 || value == NULL)
return (NULL);
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (NULL);
while (key_copy == NULL)
{
free(new_node);
return (NULL);
}
new_node->key = key_copy;
while (value_copy == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}
new_node->value = value_copy;
new_node->next = NULL;
return (new_node);
}
