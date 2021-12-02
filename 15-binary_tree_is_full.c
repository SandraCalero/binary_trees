#include "binary_trees.h"

/**
 * binary_tree_is_full -  Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full. 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check_left_child;
	int check_right_child;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	check_left_child = binary_tree_is_full(tree->left);
	check_right_child = binary_tree_is_full(tree->right);
	if (check_left_child == 1 &&  check_right_child == 1)
		return (1);
	else
		return (0);
}
