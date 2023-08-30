#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Binary Tree
 *
 * Return: Balance factor or NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (left - right);
}
