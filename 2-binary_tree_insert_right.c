#include "binary_trees.h"

/**
 * binary_tree_insert_right - A node should be added as the right child
 * in a binary tree of another.
 * @parent: a pointer to the node where the proper child should be inserted.
 * @value: The item to be saved in the new node.
 *
 * Return: If the parent is NULL or there is a problem, NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
