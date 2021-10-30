#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

class Tree
{
	class Element
	{
		int Data;
		Element* pLeft;
		Element* pRight;
	public:
		Element(int Data, Element* pLeft = nullptr, Element* pRight = nullptr) :Data(Data), pLeft(pLeft), pRight(pRight)
		{
			/*this->Data = Data;
			this->pLeft = pLeft;
			this->pRight = pRight;*/
			cout << "EConstructor:\t" << this << endl;
		}
		~Element()
		{
			cout << "EDestructor:\t" << this << endl;
		}
		friend class Tree;
	}*Root;
public:
	Element* GetRoot()const
	{
		return Root;
	}
	Tree()
	{
		this->Root = nullptr;
		cout << "TConstructor:\t" << this << endl;
	}
	Tree(const std::initializer_list<int>& il) :Tree()
	{
		for (int const* it = il.begin(); it != il.end(); it++)
		{
			Insert(*it, this->Root);
		}
	}
	~Tree()
	{
		clear(Root);
		cout << "TDestructor:\t" << this << endl;
	}

	void Insert(int Data)
	{
		Insert(Data, Root);
	}
	int minValue()
	{
		return minValue(Root);
	}
	int maxValue()
	{
		return maxValue(Root);
	}
	int count()
	{
		return Count(Root);
	}
	int Sum() const
	{
		return Sum(Root);
	}
	double avg()const
	{
		return (double)Sum(Root) / Count(Root);
	}
	void erase(int Data)
	{
		return erase(Data,this->Root);
	}

	void print()const
	{
		print(this->Root);
		cout << endl;
	}

private:
	void Insert(int Data, Element* Root)
	{
		if (this->Root == nullptr)
		{
			this->Root = new Element(Data);
			return;
		}
		if (Root == nullptr)return;
		if (Data < Root->Data)
		{
			if (Root->pLeft == nullptr)	Root->pLeft = new Element(Data);
			else Insert(Data, Root->pLeft);
		}
		else
		{
			if (Root->pRight)Insert(Data, Root->pRight);
			else Root->pRight = new Element(Data);
		}
	}
	void erase(int Data, Element*& Root)
	{
		if (Root == nullptr) return;
		erase(Data, Root->pLeft);
		erase(Data, Root->pRight);
		if (Data == Root->Data)
		{
			if (Root->pLeft == nullptr && Root->pRight == nullptr)
			{
				delete Root;
				Root = nullptr;
			}
			else
			{
				if (Root->pLeft)
				{
					Root->Data = maxValue(Root->pLeft);
					erase(maxValue(Root->pLeft), Root->pLeft);
				}
				else
				{
					Root->Data = minValue(Root->pRight);
					erase(minValue(Root->pRight), Root->pRight);
				}
			}
		}
	}
	int minValue(Element* Root)
	{
		/*if (Root->pLeft == nullptr)
			return Root->Data;
		else
			return minValue(Root->pLeft);*/
		return Root->pLeft ? minValue(Root->pLeft) : Root->Data;
	}
	int maxValue(Element* Root)
	{
		return Root->pRight ? maxValue(Root->pRight) : Root->Data;
	}

	int Count(Element* Root) const
	{
		/*if (Root == NULL)
			return 0;
		return count(Root->pRight) + count(Root->pLeft) + 1;*/
		return Root==nullptr ? 0 : Count(Root->pRight) + Count(Root->pLeft) + 1;
	}
	int Sum(Element* Root)const
	{
		return !Root ? 0 : Sum(Root->pLeft) + Sum(Root->pRight) + Root->Data;
	}

	void clear(Element* Root)
	{
		if (Root == nullptr) return;
		clear(Root->pLeft);
		clear(Root->pRight);
		delete Root;
	}
	void print(Element* Root)const
	{
		if (Root == nullptr)return;
		print(Root->pLeft);
		cout << Root->Data << "\t";
		print(Root->pRight);
	}

};
//#define BASE_CHECK

void main()
{
#ifdef BASE_CHECK
	setlocale(LC_ALL, "");
	int n;
	cout << "Qtty of nodes in tree: "; cin >> n;
	Tree tree;
	for (int i = 0; i < n; i++)
	{
		tree.insert(rand() % 100);
	}
	tree.print();
	cout << "Minimal value in TREE: " << tree.minValue() << endl;
	cout << "Maximal value in TREE: " << tree.maxValue() << endl;
	cout << "Count: " << tree.count() << endl;
	cout << "Sum: " << tree.sum() << endl;
	cout << "Average: " << tree.avg() << endl;
#endif // BASE_CHECK

	Tree tree = { 50,25,80,16,32,64,85, 58, 75, 84,91};
	tree.print();
	int value;
	cout << "Valur to delete: ";
	cin >> value;
	tree.erase(value);
	tree.print();
}