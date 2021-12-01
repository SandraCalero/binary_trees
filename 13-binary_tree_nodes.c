#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: number of nodes with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	if (tree == NULL)
		return (0);
	left_side = binary_tree_nodes(tree->left);
	right_side = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (left_side + right_side + 1);
	else
		return (left_side + right_side);
}
