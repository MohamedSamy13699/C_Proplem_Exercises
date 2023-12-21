/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a C function that compare between 2 arrays with the same length. 
 *	It shall return 0 if the two arrays are identical and 1 if not.
 *	
 *	
 */
#include <stdio.h>
#define SIZE	20
int CompareTwoArrayWithSameSize(int size , int *ptr1 ,int *ptr2);
int main()
{
	int result;
	int arr1[SIZE]={1,2,3,4,5};
	int arr2[SIZE]={1,2,3,4,6};
	result = CompareTwoArrayWithSameSize(SIZE,arr1,arr2);
	printf("Result  = %d",result);

}
/*
 * function that compare between 2 arrays with the same length
 * return 0 if the two arrays are identical and 1 if not
 * pass two pointer to integer and size of arrays to deal with arrays
 *
 * steps:
 * 			-loop each element in arrays
 * 			- check if  value of each index in first array equal the value of each index in the second one
 * 			- return result
 */
int CompareTwoArrayWithSameSize(int size , int *ptr1 ,int *ptr2)
{
	int result = 0; //assume the two array are  identical
	for(int loop = 0 ; loop < size ; loop++)
	{
		if(ptr1[loop] != ptr2[loop])
		{
			 result = 1;
			 printf("Two array are not identical \n");

		}
	}
	if(result == 0)
		 printf("Two array are  identical \n");

	return result;
}

