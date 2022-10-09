/*
 * hw4ex1.c
 *
 *  Created on: Oct 9, 2022
 *      Author: 20101
 */
#include <stdio.h>

int prime(int numb);

int main() {
			int a , z , i , f ;
			printf("enter 2 number (intervals) : \n");
			fflush(stdout);fflush(stdin);
			scanf("%d %d" , &a , &z);
			printf(" prime number between %d and %d are : " , a , z );
			for(i=a+1;i<=z;i++)
			{
				f=prime(i);
				if(f==0)
					printf("%d  " , i);
			}

			}
int prime(int numb)
{
	int j , f = 0;
	for(j=2 ; j<=numb/2 ; j++)
	{
		if(numb%j==0)
		{
			f=1;
		break;
		}
	}
	return f;
}
