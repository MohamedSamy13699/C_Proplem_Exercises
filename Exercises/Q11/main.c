/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a function that prints the frequency of a certain character in a string.
 *	
 */
#include <stdio.h>
#define SIZE 	20
int CheckFreqChar(char *ptr , char c );
int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char string[SIZE]="smaMmmy";
	char check_char;
	int freq =0;
	// Enter the required character
	printf("Enter the required character : ");
	scanf("%c",&check_char);
	// call the function
	freq = CheckFreqChar(string , check_char);
	//check if the character founded or not
	if(freq > 0)
	{
		printf("%c character is repeated %d time",check_char , freq);
	}
	else
	{
		printf("%c character is not founded ",check_char);
	}



}
/*
 * function that prints the frequency of a certain character in a string.
 * pass the character to function to search about it
 * pass pointer to a char to can deal with the string element
 *
 * loop all elements of string until reach to the null
 * if the character founded increment the frequancy variable by one
 * return -1 if the character not founded
 */
int CheckFreqChar(char *ptr , char c )
{
	int frequancy = 0;
	int i = 0;
	// loop each character until reach to the null
	while( ptr[i] != '\0')
	{
		if (ptr[i] == c)
		{
			frequancy++;
		}
		i++;
	}
	// in case the character not founded
	if(frequancy == 0)
	{
		return -1;
	}
	return frequancy;
}
