#include "Tree.h"

Tree::Element::Element(int		_data,
	                   Element* _pLeft  = nullptr,
	                   Element* _pRight = nullptr) :
	                                       data(_data),
	                                       pLeft(_pLeft),
										   pRight(_pRight)
{
	cout << "E_Constructor:\t" << this << endl;
}

Tree::Element::~Element()
{
	cout << "E_Destructor:\t" << this << endl;
}

Tree::Element* Tree::GetRoot () const
{
	return Root;
}
Tree::Tree()
{
	this->Root = nullptr;
	cout << "T_Constructor:\t" << this << endl;
}
Tree::Tree(const std::initializer_list<int>& il) : Tree()
{
	for (int const* it = il.begin(); it != il.end(); it++)
	{
		Insert(*it, this->Root);
	}
}
Tree::~Tree()
{
	Clear(Root);
	cout << "T_Destructor:\t" << this << endl;
}

//------------------------------------PUBLIC---------------------------------------------
void Tree::Insert(int data)
{
	Insert(data, Root);
}
void Tree::Erase(int data)
{
	Erase(data, this->Root);
}
int Tree::MinValue() const
{
	return MinValue(Root);
}
int Tree::MaxValue() const
{
	return MaxValue(Root);
}
int Tree::Count() const
{
	return Count(Root);
}
int Tree::Sum() const
{
	return Sum(Root);
}
double Tree::Average() const
{
	return (double)Sum(Root)/ Count(Root);
}

void Tree::Print()
{
	Print(this->Root, 0);
	cout << endl;
}

void Tree::Show() const
{
	Show(this->Root);
	cout << endl;
}


//-------------------------------------PRIVATE-----------------------------------------


void Tree::Insert(int data, Element* Root)
{
	if (this->Root == nullptr)
	{
		this->Root = new Element(data);
		return;
	}
	if (Root == nullptr)
		return;
	if (data < Root->data)
	{
		if (Root->pLeft == nullptr)
			Root->pLeft = new Element(data);
		else
			Insert(data, Root->pLeft);
	}
	else if (data> Root->data)
	{
		if (Root->pRight)
			Insert(data, Root->pRight);
		else
			Root->pRight = new Element(data);
	}
}
void Tree::Erase(int data, Element*& Root)
{
	if (Root == nullptr)
		return;
	Erase(data, Root->pLeft);
	Erase(data, Root->pRight);
	if (data == Root->data)
	{
		if (Root->pLeft == nullptr && Root->pRight == nullptr)
		{
			delete Root;
			Root = nullptr;
		}
		else
		{
			if (Count(Root->pLeft) > Count(Root->pRight))
			{
				Root->data = MaxValue(Root->pLeft);
				Erase(MaxValue(Root->pLeft), Root->pLeft);
			}
			else
			{
				Root->data = MinValue(Root->pRight);
				Erase(MinValue(Root->pRight), Root->pRight);
			}
		}
	}
}
int Tree::MinValue(Element* Root) const
{
	return Root->pLeft ? MinValue(Root->pLeft) : Root->data;
}
int Tree::MaxValue(Element* Root) const
{
	return Root->pRight ? MaxValue(Root->pRight) : Root->data;
}
int Tree::Count(Element* Root) const
{
	return Root ? Count(Root->pLeft) + Count(Root->pRight) + 1 : 0;
}
int Tree::Sum(Element* Root) const
{
	return !Root ? 0 : Sum(Root->pLeft) + Sum(Root->pRight) + Root->data;
}
void Tree::Clear(Element* Root)
{
	if (Root == nullptr) return;
	Clear(Root->pLeft);
	Clear(Root->pRight);
	delete Root;
}


void Tree::Show(Element* Root) const
{
	if (Root == nullptr) 
		return;
	Show(Root->pLeft);
	cout << Root->data << "\t";
	Show(Root->pRight);
}

void Tree::Print(Element* Root, int level)
{
	if (Root)
	{
		Print(Root->pLeft, level + 1);
		for (int i = 0; i < level; i++)
		{
			cout << "	";
		}
		cout << Root->data << endl;
		Print(Root->pRight, level + 1);
	}
}
