#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves- function that counts the leaves in a binary tree.
 * @tree:  is a pointer to the root node of the
 * tree to count the number of leaves
 * Return: 0 if the node is null, A NULL pointer is not a leaf.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left;
	size_t leaves_right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	return (leaves_left + leaves_right);
}
