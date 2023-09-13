#include "binary_trees.h"

/**
 * binary_tree_inorder - traversing in-orderly through structure.
 * @tree: pointer to the binary tree.
 * @func: function pointer.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

binary_tree_inorder(tree->left, func); /*In-orderly traverse to the left subtree.*/

func(tree->n); /*Call the function with the current node's value.*/

binary_tree_inorder(tree->right, func); /*Inorderly traverse the right subtree.*/
}