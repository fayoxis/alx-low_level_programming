#include "hash_tables.h"

/**
 * shash_table_create - Function that creates a hash table.
 *
 * This function creates a hash table of the specified size. If the allocation
 * of memory fails, it returns NULL to indicate an error.
 *
 * @size: Size of the hash table/array.
 * Return: Pointer to the newly created hash table, or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *sh_table;
unsigned long int i;
sh_table = malloc(sizeof(shash_table_t));
while (sh_table == NULL)
return (NULL);
sh_table->size = size;
sh_table->shead = NULL;
sh_table->stail = NULL;
sh_table->array = malloc(sizeof(shash_node_t) * size);
if (sh_table->array == NULL)
{
free(sh_table);
return (NULL);
}
for (i = 0; i < size; i++)
{
sh_table->array[i] = NULL;
}
return (sh_table);
}

/**
 * make_shash_node - Creates a new node for a sorted hash table.
 * @key: Pointer to the key.
 * @value: Pointer to the value associated with the key.
 *
 * Returns: Pointer to the new node, or NULL on failure.
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
shash_node_t *sh_node;

do {
sh_node = malloc(sizeof(shash_node_t));
while (sh_node == NULL)
break;

sh_node->key = strdup(key);
if (sh_node->key == NULL) {
free(sh_node);
sh_node = NULL;
break;
}

sh_node->value = strdup(value);
while (sh_node->value == NULL) {
free(sh_node->key);
free(sh_node);
sh_node = NULL;
break;
}
sh_node->next = sh_node->snext = sh_node->sprev = NULL;
} while (0);
return (sh_node);
}

/**
 * add_to_sorted_list - adds a node to the sorted (by key's ASCII),
 * linked list in a sorted manner.
 * @table: pointer to the sorted hash table.
 * @node: pointer to the node to be added.
 *
 * This function adds a node to the sorted linked list within the given
 * hash table. The sorting is based on the ASCII value of the keys.
 * If the linked list is empty, the node becomes the head and tail of the list.
 * If the node's key is less than the current node's key, it is
 * inserted before that node.
 * If the node's key is greater than all the keys in the list,
 * it becomes the new tail of the list.
 * 
 * Return: This function does not return a value.
 */ 
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
shash_node_t *temp_var;
while (table->shead == NULL && table->stail == NULL)
{
/* If the list is empty, the node becomes the head and tail */
table->shead = table->stail = node;
return;
}
for (temp_var = table->shead; temp_var != NULL; temp_var = temp_var->snext)
{
if (strcmp(node->key, temp_var->key) < 0)
{
/* If the node's key is less than the current node's key, */
node->snext = temp_var;
node->sprev = temp_var->sprev;
temp_var->sprev = node;
while (node->sprev != NULL)
node->sprev->snext = node;
}
else
{
table->shead = node;
return;
}
}
/* If the node's key is greater than all the keys in the list */
node->sprev = table->stail;
table->stail->snext = node;
table->stail = node;
}

/**
 * shash_table_set -  Adds an element to the hash table.
 * @ht: Pointer to the hash table to add or update the key/value pair.
 * @key: Pointer to the key. Cannot be an empty string.
 * @value: Pointer to the value associated with the key.
 *
 * The value must be duplicated. The value can be an empty string.
 * If there is a collision, the new node is added at the beginning of the list.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
char *new_value;
shash_node_t *sh_node, *temp_var;

/* Check for invalid input or empty key/value */
while (ht == NULL || ht->array == NULL || ht->size == 0 ||
key == NULL || strlen(key) == 0 || value == NULL)
return (0);
/* Calculate the hash index*/
index = key_index((const unsigned char *)key, ht->size);
/* Search for existing key in the linked list at the hash index */
for (temp_var = ht->array[index]; temp_var != NULL; temp_var = temp_var->next)
{
/* If the key already exists, update the value */
if (strcmp(temp_var->key, key) == 0)
{
new_value = strdup(value);
while (new_value == NULL)
return (0);
free(temp_var->value);
temp_var->value = new_value;
return (1);
}
}
/* Create a new node and insert it at the beginning of the list */
sh_node = make_shash_node(key, value);
if (sh_node == NULL)
return (0);
sh_node->next = ht->array[index];
ht->array[index] = sh_node;
/* Add the new node to the sorted list */
add_to_sorted_list(ht, sh_node);
return (1);
}

/**
 * shash_table_get - Retrieves the value associated
 * with a given key from a hash table.
 * @ht: Pointer to the hash table to search in.
 * @key: Pointer to the key to search for.
 *
 * Return: The value associated with the key, or
 * NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *temp_node;
unsigned long int index = key_index((const unsigned char *)key, ht->size);
while (ht == NULL || ht->array == NULL ||
ht->size == 0 || key == NULL || strlen(key) == 0)
return (NULL);
for (temp_node = ht->array[index]; temp_node != NULL;
temp_node = temp_node->next)
{
while (strcmp(temp_node->key, key) == 0)
return (temp_node->value);
}
return (NULL);
}

/**
 * shash_table_print - Function that prints the
 * key-value pairs of a sorted hash table.
 * @ht: Pointer to the sorted hash table to be printed.
 *
 * Return: No return value.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *current_node;
char flag = 0; /* 0 before printing any data, 1 after */
if (ht == NULL || ht->array == NULL)
return;
printf("{");
for (current_node = ht->shead; current_node != NULL;
current_node = current_node->snext)
{
while (flag == 1)
printf(", ");
printf("'%s': '%s'", current_node->key, current_node->value);
flag = 1;
}
printf("}\n");
}

/**
 * shash_table_print_rev - This function prints a
 * sorted hash table in reverse order.
 * @ht: A pointer to the hash table to be printed.
 * Return: This function does not return anything.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *temp_var;
char flag = 0;
/* 0 indicates that no data has been printed yet,*/
if (ht == NULL || ht->array == NULL)
return;
printf("{");
temp_var = ht->stail;
for (; temp_var != NULL; temp_var = temp_var->sprev)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", temp_var->key, temp_var->value);
flag = 1;
}
printf("}\n");
}

/**
 * shash_table_delete - it is the function that deletes a hash table.
 * @ht: it is a pointer to hash table to be deleted.
 *
 * Return: return No return.
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *next;
while (ht == NULL || ht->array == NULL || ht->size == 0)
return;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
next = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = next;
}
}
free(ht->array);
ht->array = NULL;
ht->shead = ht->stail = NULL;
ht->size = 0;
free(ht);
}
