#include "binary_trees.h"

/**
 * binary_tree_is_full - verifies if tree is full
 * @tree: points to root of tree
 *
 * Return: 1 if its full, 0 if its not (or null)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
