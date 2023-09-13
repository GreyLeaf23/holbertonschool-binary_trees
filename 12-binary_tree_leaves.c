#include "binary_trees.h"

/**
 * binary_tree_leaves - amount of leaves in binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: amount of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree) 
{
    size_t left_leaves = 0;
    size_t right_leaves = 0;
    
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);

    return (left_leaves + right_leaves);
}