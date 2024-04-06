//WAP to enter a 4 X 4 matrix from user and obtain sum of individual rows and 
//individual columns also calculate sum of diagonal elements.
#include<stdio.h>
void main()
{
    int arr[4][4],sumr[4],sumc[4],sumd1=0,sumd2=0,i,j;
    printf("ENTER ELMENTS OF 4X4 MATRIX : \n");
    
	for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
        scanf("%d",&arr[i][j]);
// sumr[i]=sumr[i]+arr[i][j];
// sumc[i]=sumc[i]+arr[j][i];
        }
    }
    
	for (i=0;i<4;i++)
    {
        sumr[i]=0;
        for(j=0;j<4;j++)
        {
        sumr[i]=sumr[i]+arr[i][j];
        }
    }

    for (i=0;i<4;i++)
    {
        sumc[i]=0;
        for(j=0;j<4;j++)
        {
        sumc[i]=sumc[i]+arr[j][i];
        }
    }
    
	for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
          if(i==j)
          {
          sumd1=sumd1+arr[i][i];
          }
        }
    } 
    
    for (i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
          if(i==j)
          {
          sumd2=sumd2+arr[i][3-i];
          }
        }
    } 
    printf("SUM OF ROWS: \n");
    for(i=0;i<4;i++)
    {
        printf("%3d",sumr[i]);
    }
    printf("\n");
    
	printf("SUM OF COLUMNS: \n");
    for(i =0;i<4;i++)
    {
       printf("%3d",sumc[i]);
    }
    printf("\n");
    
	printf("SUM OF PRIMARY DIAGONAL: \n");
    printf("%3d",sumd1);
    printf("\n");
    
    printf("SUM OF SECONDARY DIAGONAL: \n");
    printf("%3d",sumd2);
    printf("\n");
    
}

