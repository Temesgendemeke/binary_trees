#include "binary_trees.h"
/**
 * binary_tree_leaves - counts number of leaves a binary tree
 * @tree: pointer to tree
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int count = 0;
    if (tree == NULL)
    {
        return 0;
    }
        count += ((tree->left || tree->right) ? 1 : 0);
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
		return (count);
}