#include "binary_trees.h"
/**
 * binary_tree_inserting_left - If the parent node exists, add a new
 * node to its left; / proceed  one level then add the new node first.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the node.
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_inserting_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);
	if (n_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
	}
	parent->left = n_node;
	return (n_node);
}
