#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for binary tree
 * @parent: pointer to parent node to be created
 * @value: value to assign new node
 *
 * Return: pointer to created node, or NULL if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
