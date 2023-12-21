/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a function which, given a string, converts all uppercase letters to lowercase,
 *	 leaving the others unchanged.
 *	
 */

#include <stdio.h>
#define SIZE	30

void UpTolowCase(char *ptr , int size );
void LowToUpCase(char *ptr );
void PrintString(char *ptr , int size);

int main()
{
	char string[SIZE]="samy";
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Enter your String of letters : ");
	gets(string);

	UpTolowCase(string , SIZE);
	printf("Convert to lower case \t :");
	PrintString(string , SIZE);
	LowToUpCase(string);
	printf("Convert to upper case \t :");
	PrintString(string , SIZE);

	return 0;

}
void UpTolowCase(char *ptr , int size )
{
	int i;
	 i = 0;
		while(ptr[i] != '\0')
		{
			if (ptr[i] >= 65 && ptr[i] <=90)
			{
				ptr[i] += 32;
			}

			i++;

		}
}
void LowToUpCase(char *ptr )
{
	int i = 0;
	while(ptr[i] != '\0')
	{
		if (ptr[i] >= 97 && ptr[i] <=122)
		{
			ptr[i] -= 32;
		}

		i++;
	}
}
void PrintString(char *ptr , int size)
{
	int i;
		for (i = 0 ; i < size ; i++)
		{
			printf("%c",ptr[i]);
		}
		printf("\n");
}
