/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	C function to return the index of FIRST occurrence of a
 *	number in a given array. Array index start from 0. If the item is not
 *	in the list return -1. (Linear Search Algorithm)
 *	
 */

#include <stdio.h>
#define SIZE	9
int LinearSearch(int size , int *ptr ,int number);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num = 5;
	int result =0;
	int arr[SIZE]={4,4,5,2,5,5,1}; //define the array
	result = LinearSearch(SIZE , arr , num ); // call function and return the value at result
	if (result != 0)
	{
		printf("The element is founded in index = %d",result);
	}
	else
	{
		printf("The element is  not founded ");
	}
	return 0;
}
/*
 * Write a C function to return the index of FIRST occurrence of a number in a given array.
 * return -1 if the element not founded
 */
int LinearSearch(int size , int *ptr , int number)
{


	int result =-1;

	/* for loop to check if the number founded or not 	 */
	for (int i = 0 ; i < SIZE ; i++)
	{
		if (number == ptr[i])
		{
			return i;
		}

	}//end for loop
	return result;
}
