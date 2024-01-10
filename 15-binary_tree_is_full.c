#include "binary_trees.h"
/**
 * binary_tree_is_full_rec - run trough the tree
 * @tree: pointer to the root
 * Return: Return 1 if the node is full
*/
int binary_tree_is_full_rec(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (0);

	if (tree->left != NULL)
	{
		full_left++;
		binary_tree_is_full_rec(tree->left);
	}
	if (tree->right != NULL)
	{
		full_right++;
		binary_tree_is_full_rec(tree->right);
	}
	if (full_left == full_right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_full - run trough the tree
 * @tree: pointer to the root
 * Return: Return 1 if the tree is full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_left = 0, full_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (0);

	if (tree->left != NULL)
		full_left = binary_tree_is_full_rec(tree->left);
	if (tree->right != NULL)
		full_right = binary_tree_is_full_rec(tree->right);

	if (full_left == 1 && full_right == 1)
		return (1);
	else
		return (0);
}
