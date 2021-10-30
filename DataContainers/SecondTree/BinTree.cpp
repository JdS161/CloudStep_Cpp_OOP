#include "BinTree.h"

BinTree::Node::Node(int _data,
					Node* _pLeft = nullptr,
					Node* _pRight = nullptr) :
												data(_data),
												pLeft(_pLeft),
												pRight(_pRight)
{
	cout << "N_Constructor:\t" << this << endl;
}

BinTree::Node::~Node()
{
	cout << "N_Destructor:\t" << this << endl;
}

BinTree::BinTree()
{
	this->Root = nullptr;
	cout << "BT_Constructor:\t" << this << endl;
}
BinTree::BinTree(const std::initializer_list<int>& il):BinTree()
{
	for (int const* it = il.begin(); it != il.end(); it++)
	{
		Insert(*it, this->Root);
	}
}
BinTree::~BinTree()
{
	Clear(Root);
	cout << "BT_Destructor:\t" << this << endl;
}

//-----------------------------PUBLIC---------------------------

void	BinTree::Insert		(int data)
{
	Insert(data, Root);
}
void	BinTree::Erase		(int data)
{
	Erase(data, this->Root);
}
int		BinTree::MinVal		() const
{
	return MinVal(Root);
}
int		BinTree::MaxVal		() const
{
	return MaxVal(Root);
}
int		BinTree::Count		() const
{
	return Count(Root);
}
int		BinTree::Sum		() const
{
	return Sum(Root);
}
double	BinTree::Average	() const
{
	return (double)Sum(Root) / Count(Root);
}
void	BinTree::PrintOut	() const
{
	PrintOut(this->Root);
	cout << endl;
}

//-----------------------------PRIVATE--------------------------

void	BinTree::Insert		(int _data, Node* _Root)
{
	if (this->Root == nullptr)
	{
		this->Root = new Node(_data);
		return;
	}
	if (_Root == nullptr)
		return;
	if (_data < _Root->data)
	{
		if (_Root->pLeft == nullptr)
			_Root->pLeft = new Node(_data);
		else
			Insert(_data, _Root->pLeft);
	}
	else if (_data > _Root->data)
	{
		if (_Root->pRight)
			Insert(_data, _Root->pRight);
		else 
			_Root->pRight = new Node(_data);
	}
}
void	BinTree::Erase		(int _data, Node*& _Root)
{
	if (_Root == nullptr)
		return;
	Erase(_data, _Root->pLeft);
	Erase(_data, _Root->pRight);

	if (_data == _Root->data)
	{
		if (_Root->pLeft == nullptr && _Root->pRight == nullptr)
		{
			delete _Root;
			_Root == nullptr;
		}
		else
		{
			if (Count(_Root->pLeft) > Count(_Root->pRight))
			{
				_Root->data = MaxVal(_Root->pLeft);
				Erase(MaxVal(_Root->pLeft), _Root->pLeft);
			}
			else
			{
				_Root->data = MinVal(_Root->pRight);
				Erase(MinVal(_Root->pRight), _Root->pRight);
			}

		}
	}
}
int		BinTree::MinVal		(Node* Root) const
{
	return Root->pLeft ? MinVal(Root->pLeft) : Root->data;
}
int		BinTree::MaxVal		(Node* Root) const
{
	return Root->pRight ? MaxVal(Root->pRight) : Root->data;
	;
}
int		BinTree::Count		(Node* Root) const
{
	return Root? Count(Root->pLeft) + Count(Root->pRight) +1 : 0;

}
int		BinTree::Sum		(Node* Root) const
{
	return !Root ? 0 : Sum(Root->pLeft) + Sum(Root->pRight) + Root->data;

}
void	BinTree::Clear		(Node* Root)
{
	if (Root == nullptr)
		return;
	Clear(Root->pLeft);
	Clear(Root->pRight);
	delete Root;
}
void	BinTree::PrintOut	(Node* Root) const
{
	if (Root == nullptr) 
		return;
	PrintOut(Root->pLeft);
	cout << Root->data << "\t";
	PrintOut(Root->pRight);

}
