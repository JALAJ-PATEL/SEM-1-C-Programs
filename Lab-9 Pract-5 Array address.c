//WAP to display array elements with addresses.
#include<stdio.h>
void main()
{
	int n,i,x[n];
	printf("\nEnter the number of inputs : ");
	scanf("%d",&n);
	
	printf("\nArrays :\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&x[i]);
		printf("\n\tAddress of Array[%d] = %u\n\t\t",i+1,&x[i]);
	}
}
