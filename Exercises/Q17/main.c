/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	C Program for swapping two arrays “A & B” with different lengths. 
 *	B will be always the smallest array.
 *		int * Swap (int a_size,int *a,int b_size,int *b)
 *	
 */
#include <stdio.h>

int * Swap(int a_size,int *a,int b_size,int *b)
{
	int temp;
    int i;
	for(i=0;i<b_size;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	return a;
}


int main(void)
{
	int i;
	int array1[5] = { 1, 2, 3, 4, 5};
	int array2[5] = { 6, 7, 8, 9, 10};

	printf("Array1 before the Swap : ");
	/* Print the array1 before call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");

	printf("Array2 before the Swap : ");
	/* Print the array2 before call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array2[i]);
	}
	printf("\n");

	Swap(5,array1,5,array2);

	printf("Array1 after the Swap : ");
	/* Print the array1 after call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");

	printf("Array2 after the Swap : ");
	/* Print the array2 after call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array2[i]);
	}
	printf("\n");
	return 0;
}