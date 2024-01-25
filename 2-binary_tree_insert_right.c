#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_rihgt- This function makes a new node right
 * with the conditions of users
 * @value: is integer number
 * @parent: is a pointer
 * Return: new node letf
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (parent->rihgt != NULL)
	{
		new_node->rihgt = parent->rihgt;
		parent->rihgt->parent = new_node;
	}
	parent->rihgt = new_node;
	return (new_node);
}

