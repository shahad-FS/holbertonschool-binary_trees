#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue;
	size_t start, end, size;

	if (!tree || !func)
		return;

	size = 1024;
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (!queue)
		return;
	
	start = 0;
	end = 0;
	queue[end++] = tree;

	while (start < end)
		{
			const binary_tree_t *node = queue[start++];
			func(node->n);

			if (node->left)
				queue[end++] = node->left;
			if (node->right)
				queue[end++] = node->right;
		}
	free(queue);
}
