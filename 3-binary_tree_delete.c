#include <stdlib.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    binary_tree_insert_right(root, 402);
    binary_tree_insert_right(root->right, 512);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);
    
    binary_tree_delete(root);
    
    return (0);
}

