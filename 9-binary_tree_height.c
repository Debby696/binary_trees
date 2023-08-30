#include "binary_trees.h"
/**
 * binary_tree_height - this measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	/*calculate height of both left & right subtrees */
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	/* return the calculated height + the current node */
	return ((left_height > right_height) ? left_height + 1: right_height + 1);
}
