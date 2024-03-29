#include "binary_trees.h"
/**
 * binary_tree_depth - measure the depth of a node
 * @tree: pointer to the node
 * Return: Return the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
