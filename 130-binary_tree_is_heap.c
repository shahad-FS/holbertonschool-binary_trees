#include "binary_trees.h"

/**
 * is_max_heap - Checks if a binary tree follows Max Heap property
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree satisfies Max Heap property, 0 otherwise
 */
int is_max_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (tree->left && tree->n < tree->left->n)
		return (0);
	if (tree->right && tree->n < tree->right->n)
		return (0);

	return (is_max_heap(tree->left) && is_max_heap(tree->right));
}

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if tree is a valid Max Heap, 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!binary_tree_is_complete(tree))
		return (0);
	if (!is_max_heap(tree))
		return (0);

	return (1);
}
