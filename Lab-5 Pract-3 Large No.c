//WAP to find the largest number of  users given numbers.
#include<stdio.h>
void main()
{
	int i=1,n,large,count=1;
	
	printf("\n\tNumbers to be Entered : ");
	scanf("%d",&count);
	
	printf("\n\n\t Enter %d number one by one : ",count);
	
	
	do
	{
		scanf("%d",&n);
		
		if(i==1)
		large=n;
		
		if(n>large)
		{
		large=n;
	    }
		
		i++;
	}
	while(i<=count);
	printf("\n\tLarge Number : %d",large);
}
