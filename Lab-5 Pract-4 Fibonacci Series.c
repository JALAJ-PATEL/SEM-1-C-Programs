//WAP to show FIBONACCI series for first N numbers.
#include<stdio.h>
void main()
{
	int num1=0,num2=1,num3,n,i;
	
	printf("\n\tEnter the Value till you want FIBONACCI Series : ");
	scanf("%d",&n);
	printf("\n\t%d\n\t%d",num1,num2);
	
	for(i=3; i<=n; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		
	printf("\n\t%d",num3);
    }
}

