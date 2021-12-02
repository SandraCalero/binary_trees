#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect -  Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect. 0 otherwise or if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
		return (1);
	else
		return (0);
	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);
}
