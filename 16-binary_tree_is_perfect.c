#include "binary_trees.h"

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

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	size_t nodes = binary_tree_size(tree);
	size_t height = binary_tree_height(tree);
	size_t max_nodes = (1 << (height + 1)) - 1;

	if (max_nodes == nodes)
		return (1);
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - this measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	/*calculate height of both left & right subtrees */
	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	/* return the calculated height + the current node */
	return ((left > right) ? left : right);
}
