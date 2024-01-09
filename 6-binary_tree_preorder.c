#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree using pre-order
 * @tree: pointer to the node
 * @func: pointer to a func that print the num
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (func) == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
