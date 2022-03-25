#include "binary_trees.h"

/**
 * binary_tree_height - measure binary tree
 * @tree: pointer to root of tree
 *
 * Return: size of tree, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);

	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}
