/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	function which, given a string, return TRUE if all characters are distinct 
 *	and FALSE if any character is repeated.
 */
#include <stdio.h>

int Check_Repeated(char *str);
int main()
{
	int result =0;
	char string[]="mohamed";
	result = Check_Repeated(string); //call function
	printf("%d",result);

}
int Check_Repeated(char *str)
{
	int i = 0;
	int j = 0;
	int flag =1;
	/* 2 while loop to compare each element to anther element */
	while(str[i] != '\0')
	{
		while(str[j] != '\0')
		{
			if(str[i]==str[j+1])
			{
				return flag =0; // return 0 if the are two character is equal
			}
			j++;
		}// end of nested while

		i++;
	}//end of main while
	return flag ; // return 1 if the are two character is equal
}
