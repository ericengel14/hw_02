#include <iostream>

using namespace std;

int seqSearch(int a[], int count, int search)
{
	int match = 0;
	int i = 0;

	while( i != count){
		if( a[i] == search){
			match = a[i];
			return match;
		}
		i++;
	}		

	return -1;
}
