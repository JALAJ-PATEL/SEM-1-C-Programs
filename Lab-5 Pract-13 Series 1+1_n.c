//WAP to print following series: 1+1/2+1/3+……+1/n 
#include<stdio.h>
void main()
{
	int n,i;
	
	printf("\n\tEnter the value till you want the Series : ");
	scanf("%d",&n);
	
	printf("\n\t1 + ");
    for(i=2;i<n;i++)
    {
    printf(" 1/%d +",i);
    }
    if(i==n)
	{
		printf("\b 1/%d",n);
	}
}
