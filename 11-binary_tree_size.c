#include "binary_trees.h"

/**
 * binary_tree_size - measures size of a binary tree
 * @tree: root of the tree
 *
 * Return: size of tree, 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) +  binary_tree_size(tree->right) + 1);
}
