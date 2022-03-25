#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - mesures balance for a binary tree
 * @tree: pointer to root of tree
 *
 * Return: balance of tree or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, balance;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	balance = left - right;

	if (!tree->right)
		balance++;

	if (!tree->left)
		balance--;

	return (balance);
}
