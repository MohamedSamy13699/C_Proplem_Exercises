/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a function to reverse a string by passing it to a function.
 *	
 */
#include <stdio.h>
#define SIZE 	20
void ReverseString(char *ptr );
void PrintString(char *ptr );
int main()
{
	char string[SIZE]="Mohamed Samy";
	printf("String before reverse = ");
	PrintString(string);

	printf("String after reverse  = ");
	ReverseString(string);
	PrintString(string);
}
/*
 * function to reverse a string by passing it to a function.
 * pass a pointer to char to deal with string
 *
 * steps:
 * 		- first count the length of string
 * 		- main for loop to loop each element of string
 * 		- nested loop to reach j == len - 1 - i
 * 		- swap
 *
 */
void ReverseString(char *ptr )
{
	int len = 0;
	//count the length of string
	while(ptr[len] != '\0')
	{
		len++;
	}//end while loop

	for (int i = 0 ; i < len ; i++ )
	{
		for(int j = i ; j <= len - 1 - i ; j++)
		{
			if(j == len - 1 - i )
			{
					//swap
				int temp  = ptr[i];
					ptr[i]= ptr[j];
					ptr[j]=temp;
			}//end if condition
		}//end nested for loop
	}// end main for loop
}//end of the function

void PrintString(char *ptr )
{
	int i = 0;
		while(ptr[i] != '\0')
		{
			printf("%c",ptr[i]);
			i++;
		}
		printf("\n");
}
