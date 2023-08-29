#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* delete the left subtree */
	binary_tree_delete(tree->left);

	/* delete the right subtree */
	binary_tree_delete(tree->right);

	free(tree);
}
