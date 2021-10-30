#include <iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;


class Tree
{
private:
	class Element
	{
	private:
		int data;
		Element* pLeft;
		Element* pRight;

	public:
		Element(int, Element*, Element*);
		~Element();

		friend class Tree;
	}*Root;

public:
	Element* GetRoot()const;
	Tree();
	Tree(const std::initializer_list<int>&);
	~Tree();

	void Insert(int);
	void Erase(int);
	int MinValue() const;
	int MaxValue() const;
	int Count() const;
	int Sum() const;
	double Average() const;
	
	void Show() const;



private:

	void Insert(int, Element*);
	void Erase(int, Element*&);
	int MinValue(Element*)const;
	int MaxValue(Element*) const;
	int Count(Element*) const;
	int Sum(Element*) const;
	void Clear(Element*);
	



	void Show(Element*)const;
	
	
};
