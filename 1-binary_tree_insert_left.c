#include "binary_trees.h"
/**
 * binary_tree_insert_left: inserts a node as the left-child of another node
 * @parent: pointer to inser a node to the left-child in.
 * @value: value to store the new node.
 * Return: pointer to the created node or NULL if it fails or parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

		binary_tree_t *old = NULL;
		binary_tree_t *new = NULL;

		if (parent == NULL)
			return (NULL);
		new = malloc(sizeof(binary_tree_t));

		if (new == NULL)
			return (NULL);

		new->n = value;
		new->parent = parent;
		new->right = NULL;

		if (parent->left)
		{
			old = parent->left;
			parent->left = new;
			new->left = old;
			old->parent = new;
		}
		else
		{
			parent->left = new;
			new->left = NULL;
		}

	return (new);
}