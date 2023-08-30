#include "binary_trees.h"

int count_nodes(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int nodes = count_nodes(tree);

	return ((nodes & (nodes + 1)) == 0);
}

/**
 * count_nodes - Counts the nodes in a tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree)
		return (1 + count_nodes(tree->left) + count_nodes(tree->right));

	return (0);
}
