#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to tree
 * Return: the height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent)
	{
		l = 1 + binary_tree_depth(tree->parent);
		return (l);
	}
	else
	{
		l = 0;
		return (l);
	}
	return (l);
}
