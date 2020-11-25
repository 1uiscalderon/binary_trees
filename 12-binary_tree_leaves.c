#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the
 *  leaves in a binary tree
 * @tree: pointer to binary tree
 * Return: size_t sum
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0, c_left = 0, c_right = 0;

	if (!tree)
		return (0);
	if (tree->n && !tree->left && !tree->right)
		return (1);
	c_left = binary_tree_leaves(tree->left);
	c_right = binary_tree_leaves(tree->right);
	sum = c_left + c_right;
	return (sum);
}
