#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_balance- This function that measures
 * the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int balance_factor;
	int max_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_balance(tree->left);
	if (left_height == -1)
	{
		return (-1);
	}
	right_height = binary_tree_balance(tree->right);
	if (right_height == -1)
	{
		return (-1);
	}
	balance_factor = left_height - right_height;
	if (balance_factor < -1 || balance_factor > 1)
	{
		return (-1);
	}
	if (right_height > left_height)
	{
		max_height = right_height;
	}
	return (1 + max_height);
}
