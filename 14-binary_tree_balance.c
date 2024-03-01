#include "binary_trees.h"

/**
* max - compute the max number
* @num1: the first number
* @num2: the seconde number
* Return: the max num
*/
size_t max(size_t num1, size_t num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
/**
* binary_tree_height - computes the height of the tree (leaves height = 1)
*                       If tree is null, returns 0
* @tree: the node to compute the height at
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num1, num2;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	num1 = binary_tree_height(tree->left);
	num2 = binary_tree_height(tree->right);
	return (1 + max(num1, num2));
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: the tree to consider
* Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
