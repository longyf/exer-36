#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode *Convert(BinaryTreeNode *pRootOfTree) {
	BinaryTreeNode *pLastNodeInList = nullptr;
	ConvertNode(pRootOfTree, &pLastNodeInList);

	BinaryTreeNode *pHeadOfList = pLastNodeInList;
	while (pHeadOfList != nullptr && pHeadOfList->m_pLeft != nullptr) 
		pHeadOfList = pHeadOfList->m_pLeft;

	return pHeadOfList;
}

void ConvertNode(BinaryTreeNode *pNode, BinaryTreeNode **pLastNodeInList) {
	if (pNode == nullptr)
		return;

	BinaryTreeNode *pCurrent = pNode;

	if (pCurrent->m_pLeft != nullptr)
		ConvertNode(pCurrent->m_pLeft, pLastNodeInList);

	pCurrent->m_pLeft = *pLastNodeInList;
	if (*pLastNodeInList != nullptr)
		(*pLastNodeInList)->m_pRight = pCurrent;

	*pLastNodeInList = pCurrent;

	if (pCurrent->m_pRight != nullptr)
		ConvertNode(pCurrent->m_pRight, pLastNodeInList);
}
#endif
