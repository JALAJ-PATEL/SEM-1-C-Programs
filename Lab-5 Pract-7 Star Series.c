//WAP to print * series
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("\n\tEnter No. of Rows to Print in * Series : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		printf(" * ");
		printf("\n");
	}
}
