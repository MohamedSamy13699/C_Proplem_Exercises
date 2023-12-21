/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9,  
 *	
 */

#include <stdio.h>
#define SIZE	120
int SeriesElement(int *ptr , int size , int ElementIndex);
void PrintArray(int *ptr , int size);
int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int ElementIndex = 100;
	int value =0;
	int arr[SIZE];
	// call function and put its return value to the variable value
	value = SeriesElement(arr,SIZE,ElementIndex);
	printf(" ElementIndex have value = %d ",value);
	printf("\n");

	/*
	 *   print all element to validation the return value
	 *   let the size  of array == ElementIndex
	 *   the last element of array should be equal the value
	 */
	PrintArray(arr,SIZE);
	return 0;

}
/*
 Function that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, …
 *pass fixed size of the array to function
 *pass Element Index to stop the loop when it reach to the required index nth
 *pass pointer to an integer to can deal with the array elements
 */
int SeriesElement(int *ptr , int size , int ElementIndex)
{
	int result =0;
	// loop to compute the series
	for (int i = 1 ; i <= SIZE ; i++)
	{
		//base element to complet the series
		if (i==1)
		{
			ptr[1]=1;
		}

		// The Law equation of this series
		ptr[i+1]= ptr[i] + 2;

		// find the required index
		if (ptr[i] == ptr[ElementIndex])
		{
			result = ptr[i]; // put the value of index to the result and return it
		}
	}
	return result;
}
// print the array element
void PrintArray(int *ptr , int size)
{
	for (int i = 1 ; i <= SIZE ; i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");
}

