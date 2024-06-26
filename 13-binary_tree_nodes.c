#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least one child in binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least one child. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		node_count++;
	}

	node_count += binary_tree_nodes(tree->left);
	node_count += binary_tree_nodes(tree->right);

	return (node_count);
}
