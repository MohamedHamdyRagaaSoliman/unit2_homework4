/*
 * hw4ex4.c
 *
 *  Created on: Oct 9, 2022
 *      Author: 20101
 */
#include <stdio.h>
int power(int rkm , int os)
{
	if(os!=0)
	{
		return (rkm*power(rkm , os-1));
	}
	else
		return 1;
}
int main() {
			int n1 , n2;
			printf("enter the number : \n ");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &n1);
			printf("enter the power : \n ");
			fflush(stdout);fflush(stdin);
			scanf("%d" , &n2);
			printf("%d^%d = %d " , n1 , n2 ,power(n1, n2) );

}
