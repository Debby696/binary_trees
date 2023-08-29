#include "binary_trees.h"
/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree:  is a pointer to the root node of the tree to count the num of leaves
 * Description: a NULL pointer is not a leaf
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

