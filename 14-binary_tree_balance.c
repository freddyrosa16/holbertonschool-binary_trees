#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance of the tree
 * @tree: pointer to the root
 * Return: return the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_balance(tree->left) + 1;

	if (tree->right != NULL)
		rightHeight = binary_tree_balance(tree->right) + 1;

	return (leftHeight - rightHeight);
}
