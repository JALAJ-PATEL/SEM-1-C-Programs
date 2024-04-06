//WAP  to accept 10 numbers in an array. Also calculate and print sum of those numbers.
#include<stdio.h>
void main()
{
	int i,num[10],sum=0;
	
	printf("\n\tEnter 10 Numbers In Arrays : ");
	
	for(i=0; i<10; i++)
	{
	scanf("%d",&num[i]);
	sum += num[i];
    }
    printf("\n\tSUM of the Numbers in an Array : %d",sum);
}
