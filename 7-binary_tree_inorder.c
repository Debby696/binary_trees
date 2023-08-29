#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  is a pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* traverse left subtree */
	binary_tree_inorder(tree->left, func);

	/* to the root node */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}

