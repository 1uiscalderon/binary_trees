#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to binary tree
 * Return: size_t sum
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum = 0, c_left = 0, c_right = 0;

	if (!tree)
		return (0);
	c_left = binary_tree_size(tree->left);
	c_right = binary_tree_size(tree->right);
	sum = c_left + c_right + 1;
	return (sum);
}
