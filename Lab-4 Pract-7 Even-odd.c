//WAP to check whether a given number is even or odd

#include<stdio.h>
void main()
{
	int x;
	
	printf("\n\tEnter the Number : ");
	scanf("%d",&x);
	
	if(x%2==0)
	printf("\n\tNumber is EVEN ");
	else if(x%2 !=0)
	printf("\n\tNumber is ODD ");
	
}
