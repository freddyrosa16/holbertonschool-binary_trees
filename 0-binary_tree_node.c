#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: the parent node
 * @value: the value of the node
 * Return: Return the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
