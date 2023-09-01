#include "binary_trees.h"

/**
 * binary_tree_postorder - use post-order travers to move through a binary tre.
 * @tree: a pointing device at the tree's root node.
 * @func: a pointer to the function each node should call.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
