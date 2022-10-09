/*
 * hw4ex3.c
 *
 *  Created on: Oct 9, 2022
 *      Author: 20101
 */
#include <stdio.h>
void reverse (void)
{
	char c;
	scanf("%c" , &c);
	if(c!='\n')
	{
		reverse();
		printf("%c" , c);
	}
}
int main() {
	printf("enter a sentence \n");
	fflush(stdout);fflush(stdin);
	reverse();
}

