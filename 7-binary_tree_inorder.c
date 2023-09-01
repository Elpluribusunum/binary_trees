#include "binary_trees.h"

/**
 * binary_tree_inorder - a binary tree is traversed using in-order traversal.
 * @tree: a pointing device at the tree's root node.
 * @func: a pointer to the function each node should call.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
