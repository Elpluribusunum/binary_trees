#include "binary_trees.h"

/**
 * binary_tree_insert_left - the addition of a node as a left-child
 * of another in a b.
 * @parent: a pointer to the node where the left-child should be inserted.
 * @value: The item to be saved in the new node.
 *
 * Return: If the parent is NULL or there is a problem, NULL.
 * Otherwise - an indication of the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
