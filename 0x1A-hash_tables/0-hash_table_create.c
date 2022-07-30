#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table with a specific size
 * @size: Size of the hash table to create
 *
 * Return: Adress where the table is created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	new = calloc(1, sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		return (new);
	}
}
