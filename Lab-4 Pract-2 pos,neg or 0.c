//WAP that checks whether the input number is +ve, -ve or zero

#include<stdio.h>
void main()
{
	int x;
	
	printf("\n\tEnter the number : ");
	scanf("%d",&x);
	
	if(x>0)
	printf("\n\tNumber is POSTIVE ");
	else if(x<0)
	printf("\n\tNumber is NEGATIVE ");
	else if(x==0)
	printf("\n\tNumber is Zero ");
}
