#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as left-child
 *                           of another in a binary tree.
 * @parent: A pointer to node to insert left-child in.
 * @value: The value to store in new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         Otherwise - a pointer to new node.
 *
 * Description: If parent already has left-child, the new node
 *              takes its place and old left-child is set as
 *              left-child of new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (parent == NULL)
return (NULL);

new = binary_tree_node(parent, value);
if (new == NULL)
return (NULL);

if (parent->left != NULL)
{
new->left = parent->left;
parent->left->parent = new;
}
parent->left = new;

return (new);
}
