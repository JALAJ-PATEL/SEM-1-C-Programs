//WAP to accept a matrix from the user and print the sum of all elements.
#include<stdio.h>
void main()
{
	int r,c,i,j,sum=0;
	printf("\n\tEnter the Number of ROWS of Matrix : ");
	scanf("%d",&r);
	printf("\n\tEnter the Number of COLUMNS of Matrix : ");
	scanf("%d",&c);	
	
	int mat[r][c];
	
	printf("\n\tEnter the Value of \n\tRows(horizontally) & Columns(vertically) of Matrix : \n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		scanf("%d",&mat[i][j]);
		sum = sum + mat[i][j];
	    }
	}
		printf("\n\tSUM of all ELEMENTS : %d",sum);
}  
