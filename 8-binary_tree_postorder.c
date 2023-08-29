#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary tree using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/*traverse left subtree */
	binary_tree_postorder(tree->left, func);

	/* traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* to the root node */
	func(tree->n);
}

