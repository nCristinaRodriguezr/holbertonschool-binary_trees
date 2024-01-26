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
