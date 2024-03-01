#include "binary_trees.h"

/**
 * binary_tree_insert_right:  inserts a node as the right-child of another node
 * @parent: pointer to the node that inserts the right-child in.
 * @value: value to store in the new node.
 * Return: pointer to the new node. NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	else
	{
		parent->right = new;
		new->right = NULL;
	}
	parent->right = new;
	return (new);
}