#include "binary_trees.h"

/**
 * binary_tree_delete - delete whole binary tree.
 * @tree: pointer to binary tree.
 */

void binary_tree_delete(binary_tree_t *tree)
{

if (tree == NULL)
{
return;
}

	binary_tree_delete(tree->left); /*Deletion of left sub-tree.*/
	binary_tree_delete(tree->right); /*Deletion of right subtree.*/

	free(tree); /*free mermory of binary tree.*/
}
