//WAP to accept a matrix from the user and print its transpose. 
#include<stdio.h>
void main()
{
	int i,j,r,c;
	
	printf("\n\tEnter the Number of ROWS of Matrix : ");
	scanf("%d",&r);
	printf("\n\tEnter the Number of COLUMNS of Matrix : ");
	scanf("%d",&c);	
	
	int mat[r][c],tmat[r][c];
	
	printf("\nEnter the Values of ROWS(horizontally) & COLUMNS(vertically) :\n");
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		scanf("%d",&mat[i][j]);
	}
	
	printf("Entered Matrix :\n ");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		printf(" %d",mat[i][j]);
		printf("\n");
	}
	
	printf("TRANSPOSE of Matrix :\n ");
	for(j=0; j<c; j++)
	{
		for(i=0; i<r; i++)
		printf(" %d",mat[i][j]);
		printf("\n");
	}
}
