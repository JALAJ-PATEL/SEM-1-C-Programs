//WAP to calculate the sum of 10 numbers. If user inputs negative number then 
//negative number skips from calculation.
#include<stdio.h>
void main()
{
	int i,x,sum=0;
	
	printf("\n\tEnter 10 Numbers : \n ");
	for(i=1; i<=10; i++)
	{
		printf("\tNumber %d = ",i);
		scanf("%d",&x);
		if(x<0)
		{
			continue;
		}
		sum = sum+x;
	}
	printf("\n\n\tSUM of Numbers by Skipping Negative Numbers = %d",sum);
}
