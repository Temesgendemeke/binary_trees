#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l = 1 + binary_tree_height(tree->left);
	else
		l = 0;
	if (tree->right)
		r = 1 + binary_tree_height(tree->right);
	else
		r = 0;
	return (l > r ? l : r);
}
