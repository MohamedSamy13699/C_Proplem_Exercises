/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	Write a C function that takes an array as input and reverse it.
 *	 Example: Input : 1,2,3,4,5 
 *	 Output: 5,4,3,2,1
 *	
 */

#include <stdio.h>
#define SIZE 10
void RevArr(int *ptr , int size)
{
    for(int i = 0 ; i < (size) ; i++)
   {
       for(int j = i ; j <= size - 1 - i ; j++)
       {
           if ( j == size -1 -i)
           {
                   int temp = ptr[j];
                   ptr[j] = ptr[i];
                   ptr[i] = temp;
           }
       }
        printf("%d ",ptr[i]);
    }
}
int main() {
   int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
   printf(" %d\n ",arr[1]);
   RevArr(arr,SIZE);
   printf("\n %d",arr[1]);
   return 0;
}
