#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H
struct BinaryTreeNode {
	int m_nValue;
	BinaryTreeNode *m_pLeft;
	BinaryTreeNode *m_pRight;
	BinaryTreeNode(int x) : m_nValue(x), m_pLeft(NULL), m_pRight(NULL) {}
};
#endif
