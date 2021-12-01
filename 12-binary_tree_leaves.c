#include "binary_trees.h"

/**
 * binary_tree_leaves - Calculates the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_leaves(tree->left);
	right_side = binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (left_side + right_side + 1);
	else
		return (left_side + right_side);
}
