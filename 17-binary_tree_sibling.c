#include "binary_trees.h"

/**
 * binary_tree_sibling - discovers a sibling
 * node in a binary tree.
 * @node: a reference to the node where the siblings of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 * Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
