#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Height of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side;
	int right_side;

	if (tree == NULL)
		return (0);
	left_side = calculate_height(tree->left);
	right_side = calculate_height(tree->right);
	return (left_side - right_side);
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
		return (-1);
	left_side = calculate_height(tree->left);
	right_side = calculate_height(tree->right);
	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);

}
