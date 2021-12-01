#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Size of the depth. O if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *current_node = tree;

	if (tree == NULL)
		return (0);
	for (depth = 0; current_node->parent != NULL ; depth++)
		current_node = current_node->parent;
	return (depth);
}
