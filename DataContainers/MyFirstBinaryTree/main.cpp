#include "Tree.h"
#include <cmath>

#define BASE
//#define INIT_CHECK

int main()
{
#ifdef BASE
	srand(time(NULL));

	int treeSize;
	cout << "Tree size = ";
	cin >> treeSize;
	Tree tree;
	for (int i = 0; i < treeSize; i++)
	{
		tree.Insert(rand() % 100);
	}

	tree.Show();
	
	cout << "Minimal = " << tree.MinValue() << endl;
	cout << "Maximal = " << tree.MaxValue() << endl;
	cout << "Count = " << tree.Count() << endl;
	cout << "Sum = " << tree.Sum() << endl;
	cout << "Average = " << tree.Average() << endl;
	
#endif // BASE	

#ifdef INIT_CHECK
	Tree tree = { 12,43,5,21,87,12,3,0 };
	tree.Show();
	int value;
	cout << "Write a number to be deleted: ";
	cin >> value;
	tree.Erase(value);
	tree.Show();
#endif // INIT_CHECK

	
	return 0;
}