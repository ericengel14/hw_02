#include <iostream>

using namespace std;

int* aI(int a[], int count)
{
	cout << "count = " << count << endl;
	for(int i = 1; i <= count; i++)
	{
		a[i-1] = i;
	}

	return a;
}
