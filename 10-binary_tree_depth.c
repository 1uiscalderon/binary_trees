#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to binary tree
 * Return: size_t cont
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		tree = tree->parent;
		cont++;
	}
	return (cont);
}
