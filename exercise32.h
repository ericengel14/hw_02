/*	Eric Engel
	CPTS 223 HW 02
	
	Header file for exercise 3 
*/

#ifndef EXERCISE32_H
#define EXERCISE32_H

/*
	Function to perform binary search
	Takes 4 arguments
		an array, the number to begin at, the size of the array, and the number to be searched for
	Returns -1 if the number is not found in the array 
	Returns the number found if it does find it in the array.
*/
int binSearch(int a[], int beg, int end, int search);

/*
	Function to Initialize my array with values
	Takes 2 arguments
		The array to be initialized and the size of the array
	Returns the array
*/
int* aI(int a[], int count);

/*
	Function to perform sequential search
	Takes 4 arguments
		an array, the number to begin at, the size of the array, and the number to be searched for
	Returns -1 if the number was not found
	Returns the found number if it is found
*/
int seqSearch(int a[], int count, int search); 

/*
	Function to generate a random number
	Takes 1 argument the exponent of 10 designating the size of the array used
	Returns the number generated
*/
int rNG(int count);

#endif
