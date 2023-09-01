#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - verifies whether a binary tree is a legitimate binary searc.
 * @tree: a pointer to the tree's root node that can be checked.
 * @lo: value of the smallest node so far visited.
 * @hi: The cost of the biggest node seen so far.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - verifies whether a binary tree is a legitimate binary.
 * @tree: a pointer to the tree's root node that can be checked.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}