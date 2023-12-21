/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a C function to return the index of LAST occurrence of a
 *	number in a given array. Array index start from 0. If the item is not 
 *	in the list return -1. (Linear Search Algorithm) Example:
 *	Array = {1,2,3,4,4,4}
 *	The required number is 4 it should return 5
 *	
 *	
 */
#include <stdio.h>
#define SIZE	5
int LinearSearch(int size , int *ptr ,int number);
int main()
{
	int num = 5;
	int result =0;
	int arr[SIZE]={4,5,2,5,1}; //define the array
	result = LinearSearch(SIZE , arr , num ); // call function and return the value at result
	if (result != -1)
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
 * Write a C function to return the index of LAST occurrence of a number in a given array.
 * return -1 if the element not founded
 */
int LinearSearch(int size , int *ptr , int number)
{
	int result = -1;
	/* for loop to check if the number founded or not 	 */
	for (int i = SIZE ; i > 0 ; i--)
	{
		if (number == ptr[i])
		{
			result=i;
			break;
		}//end if condition
	}//end for loop
	return result;
}
