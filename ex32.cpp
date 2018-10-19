/*
	Eric Engel
	CPTS 223
	HW 02 exercise 3

	Program to test the run time of a sequential and a binary search algorithm with variable sizes of arrays 
	and searching for randomly generated numbers.

	compile using g++ -o exercise32.exe ex32.cpp aI.cpp binSearch.cpp seqSearch.cpp rNG.cpp
*/





#include <iostream>
#include <stdlib.h>
#include "exercise32.h"
#include <cmath>
#include <unistd.h>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{	
	int count = 1;
	double seqTime = 0;
	double binTime = 0;
	int* array;
	int ith = 1;

	ofstream myfile;
	myfile.open ("time.csv");
	myfile << "Count, Match, seqTime, binTime, \n";

	
	for(count; count <= 9; count++)
	{
		int max = pow(10, count); 
		int match = 0;	
		int runs = (pow(4, count + 1) - pow(2,count + 2));

		array = new int[max];
		array = aI(array, max);

		cout << "Starting " << count << "st iteration" << endl;

		for(int i = 0; i < runs; i++)
		{
			if(ith % 50000 == 0)
			{
				cout << "Completed " << ith << "th run" << endl;
			}			

			match = rNG(count);

        		clock_t     start;

        		start = clock();
			seqSearch(array, max, match);
			seqTime = (clock() -start)/(double)(CLOCKS_PER_SEC / 1000);
		
			start = clock();
        		binSearch(array, 1, max, match);
			binTime = (clock() - start)/(double)(CLOCKS_PER_SEC / 1000);
	
			myfile << count << "," << match << "," << seqTime << "," << binTime << "\n";
			
			ith++;

		}
		delete [] array;
		
		ith = 1;
		cout << "Completed " << count << "st iteration" << endl;
	}
	myfile.close();	

	return 0;
}
