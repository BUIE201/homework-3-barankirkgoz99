#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Node
{
	int i;
	Node* pLeft;
	Node* pRight;

	Node(int iIn) : i(iIn), pLeft(nullptr), pRight(nullptr) {}
};

void Inserting(Node*& pRoot, Node* pNewNode)
{
	if (!pRoot)
		pRoot = pNewNode;
	else
	{
		if (pNewNode->i < pRoot->i)
			Inserting(pRoot->pLeft, pNewNode);
		else
			Inserting(pRoot->pRight, pNewNode);
	}
}


void PrintTree(Node* pRoot, int Level)
{
	if (!pRoot)
		return;

	PrintTree(pRoot->pRight, Level + 1);

	for (int i = 0; i < Level; i++)
		cout << "  ";

	cout << pRoot->i << endl;

	PrintTree(pRoot->pLeft, Level + 1);
}


void main()
{
}