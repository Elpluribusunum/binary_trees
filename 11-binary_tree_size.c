#include "binary_trees.h"

/**
 * binary_tree_size - a binary tree's size is measured.
 * @tree: a pointing device to the tree's root node where the size of the tree.
 *
 * Return: the tree's dimensions.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
