/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a C function that return the count of the longest consecutive occurrence of a given number in an array. 
 *	Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 ➔ result = 4
 *	
 */
#include <stdio.h>
#define SIZE	20
int longestConsecutiveOccurrence(int size , int *ptr ,int number);
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int result = 0;
	int arr[SIZE]={1,2,2,3,3,3,3,3,4,4,4,4,3,3,3,3,5,5};
	result = longestConsecutiveOccurrence(SIZE , arr , 3);
	printf("longest Consecutive Occurrence Of %d is %d time",3,result);
}
/*
 * function that return the count of the longest consecutive occurrence of a given number in an array.
 * pass the size of array and a pointer to integer as argument to deal with the array
 * pass the number which need to compute longest consecutive occurrence as argument
 *
 * steps:
 * 			- loop each element of array to search about the number
 * 			- check if the element of array equal the number
 * 			- increment the count in case true
 * 			- in case false store the value of count into the result if the count larger than the result
 * 			- return the result
 *
 */
int longestConsecutiveOccurrence(int size , int *ptr ,int number)
{
	int count = 0 , result = 0;
	result = count;
	for(int loop = 0 ; loop < size ; loop++)
	{
		if(ptr[loop] == number)
		{
			count++;
		}
		else
		{
			if(count > result)
			{
				result = count;
				count = 0 ;
			}
		}
	}
	return result;
}

