#include "binary_trees.h"
/**
 * binary_tree_balance_rec - run through the tree
 * @tree: pointer to the root
 * Return: return the greater side
*/
int binary_tree_balance_rec(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_balance_rec(tree->left) + 1;

	if (tree->right != NULL)
		rightHeight = binary_tree_balance_rec(tree->right) + 1;

	if (rightHeight > leftHeight)
		return (rightHeight);
	else
		return (leftHeight);
}
/**
 * binary_tree_balance - measure the balance of the tree
 * @tree: pointer to the root
 * Return: Return the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_balance_rec(tree->left) + 1;

	if (tree->right != NULL)
		rightHeight = binary_tree_balance_rec(tree->right) + 1;

	return (leftHeight - rightHeight);
}
