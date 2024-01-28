#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size- function the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: 0 if the node is null otherwise the height
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_left;
	int size_right;

	if (tree == NULL)
	{
		return (0);
	}
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (1 + size_left + size_right);
}
