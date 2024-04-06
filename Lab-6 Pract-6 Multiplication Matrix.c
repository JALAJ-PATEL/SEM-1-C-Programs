//WAP  to multiply two matrices and print the results. 
#include<stdio.h>
void main()
{
	int r1,c1,r2,c2,i,j,k;
	
	printf("\n\tEnter the Number of ROWS of Matrix 1: ");
	scanf("%d",&r1);
	printf("\n\tEnter the Number of COLUMNS of Matrix 1: ");
	scanf("%d",&c1);
	
	int mat1[r1][c1];
	
	printf("\nEnter the Values of ROWS(horizontally) & COLUMNS(vertically) \nMATRIX-1:\n ");
	
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		scanf("%d",&mat1[i][j]);
	}
	
	printf("\n\tEnter the Number of ROWS of Matrix 2: ");
	scanf("%d",&r2);
	printf("\n\tEnter the Number of COLUMNS of Matrix 2: ");
	scanf("%d",&c2);
	
	int mat2[r2][c2];
	
	printf("\nEnter the Values of ROWS(horizontally) & COLUMNS(vertically) \nMATRIX-2:\n ");
	
	for(i=0; i<r2; i++)
	{
		for(j=0; j<c2; j++)
		scanf("%d",&mat2[i][j]);
	}
	
	int mulmat[i][j];
	
    if(r2==c1)
    {
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c2; j++)
			{
                mulmat[i][j]=0;
                for(k=0; k<c1; k++)
                mulmat[i][j] += mat1[i][k]*mat2[k][j];
	        }
	    } 
	    printf("Multiplication of Two Matrices :\n ");	
	    for(i=0; i<r1; i++)
	    {
	    	for(j=0; j<c2; j++)
	    	{
	    		printf("%d\t",mulmat[i][j]);
			}
			printf("\n");
		}
    }
    else
    printf("\tMatric Can't be Multiplied.\n\tROWS of Matrix-1 & COLUMNS of Matrix-2 should be EQUAL.");
}
