#include "binary_trees.h"

/**
 * binary_tree_preorder - uses pre-order travers to move through a binary tree.
 * @tree: a pointing device at the tree's root node.
 * @func: a pointer to the function each node should call.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
