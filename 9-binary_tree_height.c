#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to binary tree
 * Return: count measures the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c_left = 0, c_right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	c_left = binary_tree_height(tree->left);
	c_right = binary_tree_height(tree->right);

	if (c_left >= c_right)
		return (c_left + 1);
	else
		return (c_right + 1);
}
