#include "binary_trees.h"

/**
 * binary_tree_preorder - traversing pre-orderly through structure.
 * @tree: pointer to the binary tree.
 * @func: function pointer.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL) 
    {
        return;
    }

   func(tree->n);  /*Call the function with the current node's value.*/

    binary_tree_preorder(tree->left, func);  /*Recursively traverse the left subtree.*/

    binary_tree_preorder(tree->right, func); /*Recursively traverse the right subtree.*/
}