#include "binary_trees.h"

binary_tree_t *LCA_helper_func(const binary_tree_t *root,
			       const binary_tree_t *first,
			       const binary_tree_t *second);

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Poitner to the first node
 * @second: Pointer to the second node
 *
 * Return: Ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *root;
	binary_tree_t *LCA;

	if (first == NULL || second == NULL)
		return (NULL);

	root = first;
	while (root->parent)
		root = root->parent;

	LCA = LCA_helper_func(root, first, second);
	return (LCA);
}

/**
 * LCA_helper_func - Helper function to find the lowest common ancestor
 * of two nodes
 * @root: Pointer to the root of the node
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Ancestor or NULL
 */
binary_tree_t *LCA_helper_func(const binary_tree_t *root,
			       const binary_tree_t *first,
			       const binary_tree_t *second)
{
	if (root == NULL || root == first || root == second)
		return ((binary_tree_t *)root);

	binary_tree_t *left = LCA_helper_func(root->left, first, second);
	binary_tree_t *right = LCA_helper_func(root->right, first, second);

	if (left && right)
		return ((binary_tree_t *)root);
	return (left ? left : right);
}
