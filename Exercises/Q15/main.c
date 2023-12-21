/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a function to concatenate two strings without using strcat function.
 *	
 */
#include <stdio.h>
#define SIZE1	10
#define SIZE2	20
#define SIZE3	40

void ConcatenateTwoString(char *str1 , char *str2 ,char *str3);
int main()
{
	char string[SIZE1]="mohamed ";
	char string2[SIZE2]="samy mohamed";
	char string3[SIZE3];
	ConcatenateTwoString(string,string2,string3);
	printf("%s",string3);


}
/*
 * function to concatenate two strings
 * pass 3 pointers to char as argument
 * concatenate first two strings and store into 3th one
 * steps:
 * 		-make sure the size of the 3th string at least equal the size of first two strings
 * 		-store all elements of first one in the 3th string until reach to the null of first one
 * 		-then store all elements of second one in the 3th string until reach to the null of second one
 * 		-put the null to the end of text at 3th string
 *
 *
 */
void ConcatenateTwoString(char *str1 , char *str2 ,char *str3)
{

	int count =0;
	int loop =0;
	if(SIZE3 >= SIZE1 + SIZE2)
	{
		while(str1[loop] != '\0')
		{
			str3[loop] = str1[loop];
			loop++;
		}

		while(str2[count] != '\0')
		{
			str3[loop] = str2[count];
			count++;
			loop++;
		}
		str3[loop] = '\0';
	}else
	{
		printf("Enter Valid Size of Strings \n");
	}

}
