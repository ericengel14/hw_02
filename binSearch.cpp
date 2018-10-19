#include <iostream>

using namespace std;

int binSearch(int a[], int beg, int end, int search)
{
	if (end >= 1)
	{
		int mid = (beg + end)/2;

		if (a[mid] == search)
		{
			return mid;
		}

		if (a[mid] > search)
		{
			return binSearch(a, beg, mid-1, search);
		}

		return binSearch(a, mid + 1, end, search);
	}

	return -1;
}
