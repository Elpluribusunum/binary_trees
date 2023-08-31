#include "binary_trees.h"

/**
 * binary_tree_is_leaf - determines whether a node is a binary tree leaf.
 * @node: a reference to the check node.
 *
 * Return: If the node is a leaf - 1.
 * Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
