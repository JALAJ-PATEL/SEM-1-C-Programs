//WAP to find the sum of first N ODD Number.
#include<stdio.h>
void main()
{
	int x=1,n,count=0,sum;
	
	printf("\n\tEnter the Number of Odd Nos. you Desired to print : ");
	scanf("%d",&n);
	
	while(count<n)
	{
		sum = sum+x;
		printf("\n\t %d",x);
		x=x+2;
		count++;
	}
	printf("\n\n\tSUM of First %d Numbers = %d ",n,sum);
}
