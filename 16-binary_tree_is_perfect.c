#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect
 * A perfect tree has the same number of levels on both left and right
 * and each node must have either two children or none.
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is not perfect, otherwise the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree->left && tree->right)
	{
		left_height = 1 + tree_is_perfect(tree->left);
		right_height = 1 + tree_is_perfect(tree->right);
		if (left_height == right_height && left_height != 0 && right_height != 0)
			return (left_height);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}

	result = tree_is_perfect(tree);
	return (result != 0 ? 1 : 0);
}
