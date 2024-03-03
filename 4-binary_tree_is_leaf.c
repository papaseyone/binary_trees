#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is leaf of binary tree.
 * @node: A pointer to node to check.
 *
 * Return: If the node is leaf - 1.
 *         Otherwise - 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);

return (1);
}
