#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);

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
	left = tree->left ? tree_height(tree->left) + 1 : 0;
	right = tree->right ? tree_height(tree->right) + 1 : 0;

	return (left - right);
}


/**
 * tree_height - this measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	/*calculate height of both left & right subtrees */
	left = tree->left ? tree_height(tree->left) + 1 : 0;
	right = tree->right ? tree_height(tree->right) + 1 : 0;

	/* return the calculated height + the current node */
	return ((left > right) ? left : right);
}
