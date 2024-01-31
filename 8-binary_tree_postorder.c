#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through BT using post-Order traversal
 * @tree: pointer to tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    func(tree->n);
    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right->parent, func);
    binary_tree_postorder(tree->right, func);
}