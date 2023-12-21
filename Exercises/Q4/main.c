/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *  Author      : mohamed samy
 *  Description :
 *	C function that use the selection sort algorithm to sort
 *	an integer array in ascending order (search for the selection sorting algorithm). 
 *	
 */
#include <stdio.h>
#define SIZE	8
void SelectionSort(int *ptr , int size);
void PrintArray(int *ptr , int size);
void Swap(int *ptr1 , int *ptr2);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	// declaration of the array
	int array[SIZE]={ 15, 30, 29, 14, 39 , 42 , 35 , 6};
	// print the element before the selection sorting
	printf("Array element before sorting = ");
	PrintArray(array,SIZE);

	// call the selection sort function
	SelectionSort(array,SIZE);

	// print the element after the selection sorting
	printf("\nArray element after sorting  = ");
	PrintArray(array,SIZE);
	return 0;
}
void SelectionSort(int *ptr , int size)
{
	int minimum;

	int i , j ;

	// One by one move boundary of unsorted array
	for(i = 0 ; i < SIZE - 1; i++)
	{
		minimum = i ; // assume the minimum element in the first element

		//find the minimum element in the array and store its index  in the index of minimum
		for(j = i + 1 ; j < SIZE  ; j++)
		{
			if( ptr[j] < ptr[minimum])
			{
				minimum = j;
			}
		}
			//swap
		Swap(&ptr[minimum],&ptr[i]);

			/*
				int temp;
				temp = ptr[minimum];
				ptr[minimum] = ptr[i];
				ptr[i] = temp;
			 */



	}
}
void PrintArray(int *ptr , int size)
{
	for(int i = 0 ; i < SIZE ; i++)
	{
		printf("%d ",ptr[i]);
	}
}
void Swap(int *ptr1 , int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
