//WAP to accept 5 numbers in an array and find out the maximum and minimum number out of those.
#include<stdio.h>
void main()
{
	int max,min,i,num[5];
	
	printf("\n\tEnter 5 Numbers in Arrays : ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
    }
			max=num[i];
			min=num[i];
	for(i=1; i<5; i++)
	{
		if(num[i]>max)
		{
		   max=num[i];
	    }
		if(num[i]<min)
		{
		   min=num[i];
	    }
	}
	printf("\n\tMAXIMUM No. : %d",max);
	printf("\n\tMINIMUM No. : %d",min);	
}

