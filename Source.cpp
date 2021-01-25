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

void main()
{
}