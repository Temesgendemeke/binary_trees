#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = binary_tree_node(parent, value);
    if (newNode == NULL || parent == NULL)
    {
        return (NULL);
    }

    if (parent->right != NULL)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }
    parent->right = newNode;
    return (newNode);
}