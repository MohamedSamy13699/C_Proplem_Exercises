/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *  Author      : mohamed samy
 *  Description :
 *	C function that use the bubble sort algorithm to sort
 *      an integer array in ascending order (search for the bubble sorting algorithm). 
 *	
 */
#include <stdio.h>
#define SIZE	5
void BubbleSort(int size , int *ptr);
int main()
{
	int arr[SIZE]={8,5,4,3,1};// define the array of 5 element
	BubbleSort( SIZE , arr); //call the function
	/*
	 * for loop to print all element after sort
	 */
	printf("the element of array after sorting = ");
	for (int i = 0; i < SIZE ; i++ )
	{
		printf("%d ",arr[i]);
	}
}
void BubbleSort(int size , int *ptr)
{
	int temp;
	/*sort an integer array in ascending order
	 * used 2 for loop to sort the array
	 */
	for (int i = 0; i < SIZE - 1 ; i++ )
	{
		for(int j = 0; j < SIZE - 1 - i ; j++)
		{
			if (ptr[j] > ptr[j+1])
			{
				temp    = ptr[j];
				ptr[j]  = ptr[j+1];
				ptr[j+1]= temp;
			}//end of if
		}//end of nested loop
	}//end of main loop
}


