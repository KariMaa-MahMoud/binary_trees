#include "binary_trees.h"

/**
 * count_leaves: function that counts the number of leaves
 * @node: Node to count leaves
 * @leaves: Number of leaves to count
 * Return: None.
 */
void count_leaves(const binary_tree_t *node, size_t *leaves)
{
	if (node->right == NULL && node->left == NULL)
	{   
		*leaves += 1;
	}
	if (node->right != NULL)
		count_leaves(node->right, leaves);
	if (node->left != NULL)
		count_leaves(node->left, leaves);
}

/**
 * binary_tree_leaves: counts the leaves in a binary tree
 * @tree: Pointer to the root node.
 * Return: Number of leaves. if tree is NULL return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	count_leaves(tree, &leaves);
	return (leaves);
}