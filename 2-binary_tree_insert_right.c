#include "binary_trees.h"
/**
 * binary_tree_insert_right - funcion to add a node at the right
 * @parent: the parent of the new node;
 * @value: value of the node
 *Return: Return the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	temp = binary_tree_node(parent, value);
	if (temp == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp->right = parent->right;
		parent->right->parent = temp;
	}
	parent->right = temp;
	return (temp);
}
