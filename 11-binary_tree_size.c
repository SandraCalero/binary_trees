#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);
	return (left_side + right_side + 1);
}
