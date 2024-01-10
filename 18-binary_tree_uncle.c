#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: Return the uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *father;

	if (node == NULL)
		return (NULL);

	uncle = node;
	if (uncle->parent != NULL)
		uncle = uncle->parent;
	else
		return (NULL);

	if (uncle->parent != NULL)
	{
		father = uncle;
		uncle = uncle->parent;
	}
	else
		return (NULL);

	if (uncle->left == father)
		uncle = uncle->right;
	else
		uncle = uncle->left;

	return (uncle);
}
