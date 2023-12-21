/*
 * main.c
 *
 *  Created on  : Dec 5, 2023
 *   Author     : mohamed samy
 *  Description :
 *	The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers;
 *	 each is the sum of the preceding 2. Write a program which given n, returns the nth Fibonacci number. 
 */	

#include <stdio.h>
/*
 * program which given n, returns the nth Fibonacci number. - with recersion function
 */
int FibonacciRecersion(int index);
int main()
{
	int index =5;
	int result = FibonacciRecersion(index);
	printf("%dth Fibonacci Number: %d",index , result);
	    return 0;
}
int FibonacciRecersion(int index)
{
	if (index <= 1)
		return 1;
	return FibonacciRecersion(index - 1) + FibonacciRecersion(index - 2);
}
