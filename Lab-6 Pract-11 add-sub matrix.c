//WAP to accept two 3 x 3 matrices. Perform addition and subtraction of two 
//matrices. Print all the matrices
#include<stdio.h>
void main()
{
    int i,j,arr1[3][3],arr2[3][3],add[3][3],sub[3][3];
    
	printf("ENTER VALUES IN 3X3 MATRIX 1 : \n"); 
	for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
       scanf("%d",&arr1[i][j]);
       }
    }
    
   printf("\nENTER VALUES IN 3X3 MATRIX 2 : \n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
       scanf("%d",&arr2[i][j]);
       }
   }
   
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
      add[i][j]=arr1[i][j]+arr2[i][j];
      }
   }

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
      sub[i][j]=arr1[i][j]-arr2[i][j];
      }
   }

   printf("\nADDITION : \n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  {
      printf("%2d",add[i][j]);
      }
      printf("\n");
   }

   printf("\nSUBTRACTION : \n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  {
      printf("%2d",sub[i][j]);
      }
      printf("\n");
   }
}

