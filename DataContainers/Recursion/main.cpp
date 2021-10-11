#include <iostream>
using namespace std;

void elevator(int level)
{
	if (level == 0)
	{
		return;
	}
	cout << level << endl;
	elevator(level - 1); // Recursive call
	cout << level << endl;
}

int main()
{
	
	int n;
	cout << "LEVEL: ";
	cin >> n;
	elevator(n);
	
	
	return 0;
}