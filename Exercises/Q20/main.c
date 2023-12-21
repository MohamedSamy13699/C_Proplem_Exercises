/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a C function to return an array containing the values between 
 *	two 8-bits unsigned integers IN DESCENDING ORDER EXCLUSIVE.
 *	
 */
#include <stdio.h>

int StoreValuesBetweenTwoNumberInArray(int num1 ,int num2 , int *ptr );
int main()
{
	int LowerValue = 2;
	int UpperValue = 6;
	int new_array_size=0;
	int arr[5];
	new_array_size = StoreValuesBetweenTwoNumberInArray(LowerValue ,UpperValue , arr );
	for(int i = LowerValue + 1 ; i < UpperValue  ;i++)
	{
		printf("%d ",arr[i]);
	}
	printf(" \nnew_array_size = %d",new_array_size);

	return 0;
}

int StoreValuesBetweenTwoNumberInArray(int num1 ,int num2 , int *ptr )
{

    int size_count =0;
	if (num1 >= num2)
	{
		ptr[num1]= 0xff;
		ptr[num2]= 0xff;
		//size_count = 2;
	}else
	{
		for(int i = num2-1 ; i > num1 ; i--)
			{

				ptr[i]= i - 1;
				size_count++;

			}
	}
	return size_count;
}

