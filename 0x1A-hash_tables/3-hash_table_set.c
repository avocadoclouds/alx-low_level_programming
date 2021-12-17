#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: (pointer) hash table to be added or updated
 * @key: input key [cant be empty]
 * @value: value associated with key
 *
 * Return: 1 if succesus, 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size;
	hash_node_t *actual_node;
	hash_node_t *start;

	if (ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *) key, size);

	actual_node = ht->array[index];

	if (actual_node == NULL)
	{
		ht->array[index] = assign_values(key, value);
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}

	start = actual_node;

	while (actual_node != NULL)
	{
		if (strcmp(actual_node->key, key) == 0)
		{
			free(actual_node->value);
			actual_node->value = strdup(value);
			return (1);
		}
		actual_node = actual_node->next;
	}

	ht->array[index] = assign_values(key, value);
	if (ht->array[index] == NULL)
		return (0);
	(ht->array[index])->next = start;

	return (1);
}

/**
 * assign_values - creates node
 *
 * @key: Key
 * @value: Value
 *
 * Return: Pointer to the new node or NULL if failure
*/

hash_node_t *assign_values(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
