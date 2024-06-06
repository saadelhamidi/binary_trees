#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *n_node;

    if (parent == NULL)
        return (NULL);

    n_node = binary_tree_node(parent, value);
    if (n_node == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        n_node->right = parent->right;
        parent->right->parent = n_node;
    }
    parent->right = n_node;

    return (n_node);
}
