#include "binary_trees.h"
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
