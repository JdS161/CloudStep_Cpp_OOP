#pragma once
#include <iostream>	
#include "BinTree.h"

using namespace std;

class Node
{
private:
	int data;
	Node* pLeft;
	Node* pRight;

public:
	Node(int, Node*, Node*);
	~Node();

	friend class BinTree;

}*Root;

