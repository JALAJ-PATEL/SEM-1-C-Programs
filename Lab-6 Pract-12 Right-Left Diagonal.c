//WAP to calculate and print sum of left diagonal and right diagonal to a 3 x 3 matrix.
#include<stdio.h>
void main()
{
   int arr[3][3],sumd=0,sumd1=0,i,j;
   
   printf("ENTER ELMENTS OF MATRIX : \n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
      scanf("%d",&arr[i][j]);
// sumr[i]=sumr[i]+arr[i][j];
// sumc[i]=sumc[i]+arr[j][i];
      }
   }

   for (i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
          if(i==j)
          {
          sumd=sumd+arr[i][i];
          }
          if(i+j==2)
          {
          sumd1=sumd1+arr[i][j];
          }
       }
   }

   printf("\nSUM OF LEFT DIAGONAL : %d",sumd);
   printf("\nSUM OF RIGHT DIAGONAL : %d",sumd1);
}
