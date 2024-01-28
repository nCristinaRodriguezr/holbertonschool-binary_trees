#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes- function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree:is a pointer to the root node of the tree to
 * count the number of nodes
 * Return: 0 if the node is null or A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int nodes_left;
	int nodes_right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		nodes_left = binary_tree_nodes(tree->left);
		nodes_right = binary_tree_nodes(tree->right);
		return (1 + nodes_left + nodes_right);
	}
	return (0);
}
