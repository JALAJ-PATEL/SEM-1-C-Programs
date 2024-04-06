//Write a program to perform given operation using the bitwise operator on two value. x&y
#include<stdio.h>
#include<math.h>
void main()
{
	int x,y;
	printf("\n\tEnter the value of x : ");
	scanf("%d",&x);
	printf("\n\tEnter the value of y : ");
	scanf("%d",&y);
	
	printf("\n\t BITWISE OPERATORS :");
	
	printf("\n\n\tAND Operation %d & %d = %d",x,y,x&y);
	printf(" \n\tOR Operation %d | %d = %d",x,y,x|y);
	printf(" \n\tXOR Operation %d ^ %d = %d",x,y,x^y);
	printf(" \n\tLEFT SHIFT Operation %d>>2 = %d",x,x>>2);
	printf(" \n\tRIGHT SHIFT Operation %d<<1 = %d",y,y<<1);
	printf(" \n\tLEFT SHIFT Operation %d>>2 = %d",y,y>>2);
     	
}
