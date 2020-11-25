#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: Pointer to the parent node of the node to create
* @value: Value to put in the new node
* Return: Pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->left = parent->left;
	parent->left = new;
	new->n = value;
	new->right = NULL;
	new->parent = parent;
	if (new->left)
		new->left->parent = new;
	return (new);
}
