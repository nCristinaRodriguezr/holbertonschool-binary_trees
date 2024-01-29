#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full- function that checks if a binary tree is full
 * @tree:  is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL && tree->right == NULL) ||
	(tree->left != NULL && tree->right != NULL))
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (left_full && right_full);
	}
	return (0);
}
