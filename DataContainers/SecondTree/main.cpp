#include <cmath>

#include "BinTree.h"

//#define BASE_CHECK
#define INITIALIZED_CHECK
int main()
{
#ifdef BASE_CHECK
	srand(time(NULL));
	int size;
	cout << "How many nodes you wnat to see in a tree: ";
	cin >> size;
	BinTree tree;
	for (int i = 0; i < size; i++)
	{
		tree.Insert(rand() % 100);
	}

	tree.PrintOut();

	cout << "Minimal value: " << tree.MinVal() << endl;
	cout << "Maximal value: " << tree.MaxVal() << endl;
	cout << "Count: " << tree.Count() << endl;
	cout << "Sum: " << tree.Sum() << endl;
	cout << "Average: " << tree.Average() << endl;
#endif // BASE_CHECK

#ifdef INITIALIZED_CHECK
	BinTree tree = { 3,4,12,43,12,6,5,47,98,4 };
	tree.PrintOut();
	cout << "Minimal value: " << tree.MinVal() << endl;
	cout << "Maximal value: " << tree.MaxVal() << endl;
	cout << "Count: " << tree.Count() << endl;
	cout << "Sum: " << tree.Sum() << endl;
	cout << "Average: " << tree.Average() << endl;
	int toDel;
	cout << "Value to deletion: ";
	cin >> toDel;
	tree.Erase(toDel);
	tree.PrintOut();
#endif // INITIALIZED_CHECK


	return 0;
}