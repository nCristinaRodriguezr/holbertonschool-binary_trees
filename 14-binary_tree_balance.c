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

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (right_height - left_height);
}
