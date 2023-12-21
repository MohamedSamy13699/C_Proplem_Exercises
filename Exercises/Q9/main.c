/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers;
 *	 each is the sum of the preceding 2. Write a program which given n, returns the nth Fibonacci number. 
 */	

#include <stdio.h>
#define SIZE	15
/*
 * program which given n, returns the nth Fibonacci number. - with for loop
 * pass index which required to computed as an argument to the function
 * pass the size of an array
 * pass the pointer to an integer to can deal with the array
 *
 * steps:
 * 		check the index smallest than the size of array to can compute the required value
 * 		loop each index and compute its value
 * 		base case if the first and the second elements is equal 1
 * 		the law of the series is ptr[i]=ptr[i-1] + ptr[i-2] , each number is the sum of the preceding 2
 * 		break function when reach the required address and store the value in the result variable
 * 		return the result
 */

int FibonacciSeries(int index , int *ptr , int size)
{
	int result = 0;
	//check the index smallest than the size of array
	if(index < size)
	{
		//loop each index and compute its value
		for (int i = 0 ; i < SIZE ; i++)
		{
			// Base case
			if (i <= 1)
			{
				ptr[i] = 1;
			}
			//the law of the series
			else
			{
				ptr[i]=ptr[i-1] + ptr[i-2];
			}

			if(index == i)
			{
				result = ptr[i];
				break;
			}//end if

		}//end for loop

	}// end of if condition

	else
	{
		printf("Enter valid index inside the range of array\n");
		result = -1;
	}//end of else

	return result;
}
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int arr[SIZE];
	int ElementIndex =14;
	int result =0;
	result = FibonacciSeries(ElementIndex , arr , SIZE);
	printf("Value = %d",result);
}
