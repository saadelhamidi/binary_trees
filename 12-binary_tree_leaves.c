#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (left_leaves + right_leaves);
	}
}
