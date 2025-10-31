#include "binary_trees.h"

/**
 * binary_tree_size - Counts the nodes in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete_helper - Recursively checks completeness by index.
 * @tree: Pointer to root node.
 * @index: Index of current node.
 * @node_count: Total nodes in the tree.
 *
 * Return: 1 if complete, 0 otherwise.
 */
int binary_tree_is_complete_helper(const binary_tree_t *tree,
	size_t index, size_t node_count)
{
	if (!tree)
		return (1);
	if (index >= node_count)
		return (0);
	return (binary_tree_is_complete_helper(tree->left, 2 * index + 1, node_count) &&
			binary_tree_is_complete_helper(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to root node.
 *
 * Return: 1 if complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t node_count;

	if (!tree)
		return (0);

	node_count = binary_tree_size(tree);
	return (binary_tree_is_complete_helper(tree, 0, node_count));
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
		return (1);
	if (!binary_tree_is_complete(tree))
		return (0);
	if (tree->left && tree->n < tree->left->n)
		return (0);
	if (tree->right && tree->n < tree->right->n)
		return (0);
	if (!binary_tree_is_heap(tree->left) || !binary_tree_is_heap(tree->right))
		return (0);
	return (1);
}
