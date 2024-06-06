#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * A leaf node is one that has no children.
 * @node: Pointer to the node to check
 * Return: 1 if the node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}

