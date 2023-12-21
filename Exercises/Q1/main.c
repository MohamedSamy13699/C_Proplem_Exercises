/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	The sum of an array is the sum of its individual elements.
 *	For example, if an array is numbers = {1, 2, 3, 4}, the sum of the array is 1+2+3+4 = 10. 
 *	Function Description: Complete the function summation. 
 *	The function must return the integer sum of the numbers array. 
 *    		int summation(int numbers_size, int* numbers)
 *	
 */
#include <stdio.h>
#define SIZE	5
int summation(int numbers_size, int* numbers);
int main()
{
	int arr[SIZE];
	int sum=0;
	printf("Enter Numbers \n");
	/* for loop to take the element for the user */
	for (int i=0 ; i < SIZE ; i++)
	{
		printf("Number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	sum = summation(SIZE,arr);
	printf("The sum of the numbers = %d",sum);

return 0;
}
/*
 * this function used to return the integer sum of the numbers array.
 * pass the size of array as argument
 * pass pointer to integer number to can ass the array element
 */
int summation(int numbers_size, int* numbers)
{
	int sum =0;
	/* for loop to sum all element of the array	 */
	for (int i=0 ; i < SIZE ; i++)
	{
		sum+=numbers[i];
	}
	return sum;
}
