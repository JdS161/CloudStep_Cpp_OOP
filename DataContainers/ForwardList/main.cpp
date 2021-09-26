#include "ForwardList.h"
using std::cin;
using std::cout;
using std::endl;

//#define BASE_CHECK
#define delimiter "\n---------------------------------------------------------------\n"
void main()
{
#ifdef BASE_CHECK
	int n;
	cout << "Define array size: ";
	cin >> n;

	ForwardList list;
	for (int i = 0; i < n; i++)
	{
		//list.PushFront(rand() % 100);
		list.PushBack(rand() % 100);
	}

	list.Print();
	/*list.PushBack(123);
	list.Print();*/
	//list.PopBack();
	int index;
	int value;
	/*cout << "Index = ";
	cin >> index;
	cout << "Value = ";
	cin >> value;
	list.Insert(index, value);
	list.Print();*/

#endif // BASE_CHECK

	ForwardList list = { 3,5,8,13,21 };
	//list.Print();
	cout << endl;
	cout << delimiter;
	cout << "RANGE BASED FOR"<<endl;
	for (int i : list)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << delimiter;
	/*cout << "FOR" << endl;
	for (ForwardList::Iterator it = list.begin(), end = list.end(); it != end; ++it)
	{
		cout << *it << " ";
	}*/
	cout << delimiter;
	/*ForwardList list2;
	list2 = list;
	list2.Print();*/

}

	
	