#include "binary_trees.h"
/**
 * binary_tree_insert_right - funcion to add a node at the right
 * @parent: the parent of the new node;
 * @value: value of the node
 *Return: Return the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *right;


	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->right = NULL;
	if (parent->right != NULL)
	{
		right = parent->right;
		right->parent = temp;
		temp->right = right;
	}
	parent->right = temp;
	temp->left = NULL;

	return (temp);
}
