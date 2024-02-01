#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: the height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return (0);
    }
    if(tree->parent == NULL)
    {
        return (0);
    }

    size_t l,r = 0;

    l = tree->left? binary_tree_depth(tree->left): 0;
    r = tree->left? binary_tree_depth(tree->right): 0;
   
    return (l > r? (l+1) : (r+1));
}