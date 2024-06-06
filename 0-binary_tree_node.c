#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: a pointer to the parent node of the node to create
 * @value: Value of the node
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{	binary_tree_t *n_node;
	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	return (n_node);
}
