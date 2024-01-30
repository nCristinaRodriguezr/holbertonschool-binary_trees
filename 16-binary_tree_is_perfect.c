#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: 0 if the node is null otherwise the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t altura_izquierda;
	size_t altura_derecha;
	size_t altura_actual;

	if (tree == NULL)
	{
		return (0);
	}
	altura_izquierda = binary_tree_height(tree->left);
	altura_derecha = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (altura_izquierda > altura_derecha)
	{
		altura_actual = altura_izquierda;
	}
	else
	{
		altura_actual = altura_derecha;
	}
	return (altura_actual + 1);
}
/**
 * binary_tree_is_perfect- function that checks if a binary tree is perfect
 * @tree:is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		return (binary_tree_is_perfect(tree->left) &&
		       binary_tree_is_perfect(tree->right));
	}
	return (0);
}
