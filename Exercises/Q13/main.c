/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *      Write a function to remove all characters in a string expect alphabet.
 *	
 */
#include <stdio.h>
#define SIZE 	20
void FilterString(char *ptr );
void PrintString(char *ptr );
int main()
{
	char string[SIZE]="sma=M,mmy";
	printf("String before filtration = ");
	PrintString(string);

	printf("String after filtration  = ");
	FilterString(string);
	PrintString(string);
}
/*
 * function to remove all characters in a string expect alphabet.
 * pass a pointer to a char as argument of the function to deal with string
 *
 * main while with index i to loop each element in the string
 * check if the element is alphabet or not
 * 	if true  : increment the i index to check the next element until reach null
 * 	if false :
 * 		- if ith element of line is not an alphabet,
 * 		- assign the index i in j
 * 		- and put ptr[j+1] in ptr[j] to remove the element and shaft left all element
 * 		- then increment the i index to check the next
 */
void FilterString(char *ptr )
{
	int i = 0;
	int j = 0;
	while(ptr[i] != '\0')
	{
		if ( (ptr[i] >= 'A' && ptr[i] <= 'Z') || (ptr[i] >= 'a' && ptr[i] <= 'z') )
		{
			i++;
		}//end if condition
		else
		{
			j = i;
			while(ptr[j] != '\0')
			{
				ptr[j]=ptr[j+1];//remove element by assign in next element in its index
				j++; 			// increment to assign every element in the previous index
			}//end nested while
			i++; // increment to check the next element
		}//end else condition
	} // end main while
}// end function
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
