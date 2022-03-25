#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verifies node is part of tree
 * @node: node being checked
 * 
 * Return: 1 if node is part of tree, else, 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->right && !node->left)
		return (1);

	return (0);
}
