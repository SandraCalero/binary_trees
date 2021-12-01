#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	return (calculate_height(tree));
}

/**
 * calculate_height - Calculates the height
 * 
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Height of the tree
 */

size_t calculate_height(const binary_tree_t *tree)
{
	int left_side;
	int right_side;
	if (tree == NULL)
		return -1;
	left_side = calculate_height(tree->left);
	right_side = calculate_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);

}