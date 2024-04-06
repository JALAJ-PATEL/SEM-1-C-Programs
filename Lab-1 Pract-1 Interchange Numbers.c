/* WAP to INTERCHANGE THE VALUE OF TWO NUMBERS. (Using 3rd value)*/

#include<stdio.h>
void main()
{
	int x=10,y=20,swap;
	
	printf("\tValue of variables BEFORE INTERCHANGE :x= %d y= %d",x,y);
	
	swap=x;
	x=y;
	y=swap;
	
	printf("\n\tValues of variables AFTER INTERCHANGE :x= %d y= %d",x,y);
	
}
