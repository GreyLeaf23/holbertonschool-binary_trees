#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node in binary tree..
 * @node: pointer to the node to find sibling.
 *
 * Return: sibling of node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

    if (node == NULL || node->parent == NULL)
        return (NULL);

/*Assign 'parent' variable to hold 'parent' from binary structure.*/
    binary_tree_t *parent = node->parent;

    if (parent->left == node) /*Check if left node has a right sibling.*/
    {
        return (parent->right);
    }

    else
    {
        return (parent->left);
    }
}