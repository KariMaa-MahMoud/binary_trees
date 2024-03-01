#include "binary_trees.h"

/**
 * binary_tree_is_full: checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The depth, or 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int subtree_left = 0, subtree_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		subtree_left = binary_tree_is_full(tree->left);
		subtree_right = binary_tree_is_full(tree->right);
		return (subtree_left && subtree_right);
	}
	else
		return (0);
}