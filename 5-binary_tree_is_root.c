#include "binary_trees.h"

/**
 * binary_tree_is_root - determines whether a node is the binary tree's root.
 * @node: a reference to the check node.
 *
 * Return: If a root node, the value is 1.
 * Hence - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
