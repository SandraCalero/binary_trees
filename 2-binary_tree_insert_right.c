#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->n = value;
	new_node->parent = parent;
	if (parent->right != NULL)
		parent->right->parent = new_node;
	new_node->right = parent->right;
	new_node->left = NULL;
	parent->right = new_node;
	return (new_node);
}
