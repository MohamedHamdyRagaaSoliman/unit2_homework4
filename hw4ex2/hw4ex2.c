/*
 * hw4ex2.c
 *
 *  Created on: Oct 9, 2022
 *      Author: 20101
 */

#include <stdio.h>
int fact(int n)
{
	if(n!=1)
		return n*fact(n-1);
}
int main() {
	int n;
	printf("enter a positive number : \n");
	fflush(stdout);fflush(stdin);
	scanf("%d" , &n);
	printf("the factorial of : %d = %1d ", n , fact(n));
}

