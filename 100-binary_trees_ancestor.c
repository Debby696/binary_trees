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
	if (first == NULL || second == NULL)
		return (NULL);

	binary_tree_t *root1 = (binary_tree_t *)first;
	binary_tree_t *root2 = (binary_tree_t *)second;

	while (root1->parent)
		root1 = root1->parent;
	while (root2->parent)
		root2 = root2->parent;

	if (root1 != root2)
		return (NULL);

	return (LCA_helper_func(root1, first, second));
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
