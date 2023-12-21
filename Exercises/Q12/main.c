/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a function to find the length of a string.
 */

#include <stdio.h>
#define SIZE 	20
int LengthString(char *ptr );
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char string[SIZE]="smaMmmy";
	int len =0;
	len = LengthString(string);
	printf("Length of string = %d",len);
	return 0;
}
/*
 * function to find the length of a string.
 * pass a pointer to a char to deal with the string element
 *
 * loop each element in the string and count the number of its element
 * return length of string
 */
int LengthString(char *ptr )
{
	int i =0;
	while(ptr[i] != '\0')
	{
		i++;
	}
	return i;
}

