/* 

*       *
**     **
***   ***
**** ****
*********
#include<stdio.h>
void main()
{
	int j,i,k;
	
	for(i=1; i<=5; i++)
	{
		
		for(j=1; j<=9; j++)
		{
			if(j<=i || j>=10-i)
			{
			  printf("*");
			  	
			}
			else
			{
			  printf(" ");
			  	
			}
		}
	printf("\n");
	}
}


*********
**** ****
***   ***
**     **
*       *

#include<stdio.h>
void main()
{
	int j,i,k;
	
	for(i=1; i<=5; i++)
	{
		
		for(j=1; j<=9; j++)
		{
			if(j<=6-i || j>=4+i)
			{
			  printf("*");
			  	
			}
			else
			{
			  printf(" ");
			  	
			}
		}
	printf("\n");
	}
}

    *
   * *
  * * *
 * * * *
* * * * *

#include<stdio.h>
void main()
{
	int j,i,k;
	
	for(i=1; i<=5; i++)
	{
		k=1;
		for(j=1; j<=9; j++)
		{
			if(j>=6-i && j<=4+i && k)
			{
			  printf("*");
			  k=0;	
			}
			else
			{
			  printf(" ");
			  k=1;	
			}
		}
	printf("\n");
	}
}


   *
  ***
 *****
*******
 *****
  ***
   *

#include<stdio.h>
void main()
{
	int j,i,k;
	
	for(i=1; i<=7; i++)
	{
	    i<=4?k++:k--;	
		for(j=1; j<=7; j++)
		{
			if(j>=5-k && j<=3+k)
			{
			  printf("*");
			  	
			}
			else
			{
			  printf(" ");
			  	
			}
		}
	printf("\n");
	}
}


 
//GENERALIZED FORM FOR ABOVE PATTERN
//But it will Work just for the odd number of rows...
//For even number it will decrease it by 1...for even rows prgrm you will have to make some changes
//For even you have to add

if(rows%2=0)
{
	if(i<=n) k++;
	if(i>n+1) k--;
}


#include<stdio.h>
void main()
{
	int j,i,k,n,rows;
	
	printf("Enter the Number of Rows to print Diamond : ");
	scanf("%d",&rows);
	
	n= (rows+1)/2;
	for(i=1; i<=rows; i++)
	{
	    i<=n?k++:k--;	
		for(j=1; j<=rows; j++)
		{
			if(j>=n+1-k && j<=n-1+k)
			{
			  printf("*");
			  	
			}
			else
			{
			  printf(" ");
			  	
			}
		}
	printf("\n");
	}
}  
*/


#include<stdio.h>
void main()
{
	int j,i,k;
	
	for(i=1; i<=6; i++)
	{
		k=1;
		for(j=1; j<=11; j++)
		{
			if(j>=7-i && j<=5+i && k)
			{
			  printf("*");
			  k=0;	
			}
			else
			{
			  printf(" ");
			  k=1;	
			}
		}
	printf("\n");
	}
	printf("     *\n    ***");
}
