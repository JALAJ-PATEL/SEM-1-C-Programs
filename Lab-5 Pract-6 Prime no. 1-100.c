//WAP to print prime numbers b/w 1 -100
#include<stdio.h>
void main()
{
	int n=2,count,i;
	
	printf("PRIME No. b/w 1-100 : \n");
	
	for(n;n<=100;n++)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(count==2)
		printf(" %d",n);
	}
	
}
