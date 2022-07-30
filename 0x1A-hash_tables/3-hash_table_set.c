#include "hash_tables.h"
/**
 * key_checker - function that check if key exist to update
 * @tmp: is the head of the current linked list
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int key_checker(hash_node_t *tmp, char *key, char *value)
{
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *head;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	if (key_checker(head, (char *)key, (char *)value) == 1)
		return (1);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	head = ht->array[index];
	new_node->next = head;
	ht->array[index] = new_node;
	return (1);
}
