#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through BT using pre-order traversal
 * @tree: pointer to tree
 * @func: prints numbers
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == 0 || func == 0)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
