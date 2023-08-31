#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in a binary tree.
 * @parent: a pointing device to the node's parent.
 * @value: what should go in the new node.
 *
 * Return: If a mistake is made, use NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
