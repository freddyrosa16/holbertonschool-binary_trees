#include "binary_trees.h"
/**
 * binary_tree_is_full - run trough the tree
 * @tree: pointer to the root
 * Return: Return 1 if the tree is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
