//WAP to find the FACTORIAL of given numbers.
#include<stdio.h>
void main()
{
	int x=1,fr,n;
	
	printf("\n\tEnter the Value of No. you want the Factorial :");
	scanf("%d",&n);
	
	while(x<=n)
	{
		fr = fr*x;
		x++;
	}
	printf("n\n\tFACTORIAL of %d : %d",n,fr);
}
