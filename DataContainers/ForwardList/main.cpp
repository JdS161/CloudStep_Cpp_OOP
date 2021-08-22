#include "ForwardList.h"


void main()
{
	int n;
	cout << "Define array size: ";
	cin >> n;

	ForwardList list;
	for (int i = 0; i < n; i++)
	{
		list.PushFront(rand() % 100);
	}

	list.Print();
}

	
	