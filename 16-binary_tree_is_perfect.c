#include "binary_trees.h"
int tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes;

	if (tree == NULL)
		return (0);

	nodes = tree_size(tree);
	if (nodes & (nodes + 1))
		return (0);

	return (1);
}

/**
 * tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */
int tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_size(tree->left) + tree_size(tree->right) + 1);
}
