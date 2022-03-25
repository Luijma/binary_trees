#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with 1 child up in a binary tree
 * @tree: root of tree
 *
 * Return: node count or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		total_nodes++;

	if (tree->right != NULL)
		total_nodes += binary_tree_nodes(tree->right);

	if (tree->left != NULL)
		total_nodes += binary_tree_nodes(tree->left);

	return (total_nodes);
}
