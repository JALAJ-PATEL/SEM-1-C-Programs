/*WAP to print the Patterns 
1
2 3
4 5 6
7 8 9 10 */

#include<stdio.h>
void main()
{
	int i,j,a=1;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",a);
			a=a+1;
		}
		printf("\n");
	}
}

/*WAP to print the Pattern
9 8 7 6
8 7 6 5
7 6 5 4
6 5 4 3  */

#include<stdio.h>
void main()
{
	int i,j,a=9;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++)
		{
			printf("%d ",a);
			a=a-1;
		}
		a=a+3;
		printf("\n");
	}
}

/*WAP to print the Pattern
10
9 8
7 6 5
4 3 2 1 */

#include<stdio.h>
void main()
{
	int i,j,a=10;
	
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",a);
			a=a-1;
		}
		printf("\n");
	}
} 

/*WAP to print the Patterns
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5  */

#include<stdio.h>
void main()
{
	int i,j,a=1;
	
	for(i=1; i<=5; i++)
	{
		a=1;
		for(j=1; j<=i; j++)
		{
			printf("%d ",a);
			a=a+1;
		}
		printf("\n");
	}
}
