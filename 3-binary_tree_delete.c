#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * Recursively frees each node starting from the leaves up to the root
 * @tree: A pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
