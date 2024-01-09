#include "binary_trees.h"
/**
 * binary_tree_insert_left - create a binary tree node to the left.
 * @parent: the parent node.
 * @value: the value of the node.
 * Return: return the new node on the left.
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
