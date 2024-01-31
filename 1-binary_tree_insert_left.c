#include "binary_trees.h"
/**
 *  binary_tree_insert_left - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 * Return:  a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (newNode == NULL || parent == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
