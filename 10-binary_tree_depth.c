#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of binary tree.
 * @tree: pointer to the root of binary tree.
 *
 * Return: depth of binary tree.
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL)
    return (0);

size_t depth = 0;
const binary_tree_t *current = tree; /*'current' is use to traverse tree.*/

/*Navigation through tree until 'current' reaches the root.*/
    while (current->parent != NULL)
    {
        depth++;
        current = current->parent;
    }

    return (depth);
}