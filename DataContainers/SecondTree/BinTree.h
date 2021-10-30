#pragma once
#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

class BinTree
{
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

public:
	BinTree();
	BinTree(const std::initializer_list<int>&);
	~BinTree();

	void	Insert		(int);
	void	Erase		(int);
	int		MinVal		() const;
	int		MaxVal		() const; 
	int		Count		() const;
	int		Sum			() const;
	double	Average		() const;
	void	PrintOut	() const;

private:
	void	Insert		(int, Node*);
	void	Erase		(int, Node*&);
	int		MinVal		(Node*) const;
	int		MaxVal		(Node*) const;
	int		Count		(Node*) const;
	int		Sum			(Node*) const;
	void	Clear		(Node*);
	void	PrintOut	(Node*) const;
};
