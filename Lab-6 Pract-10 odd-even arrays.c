//WAP to separate odd and even integers in separate arrays. (Prepare arrays for 
//odd and even numbers from one array)
#include<stdio.h>
void main()
{
   int m,even[100],odd[100],j=0,k=0,i;
   printf("ENTER THE NO. OF ELEMENTS OF ARRAY : ");
   scanf("%d",&m);
   
   int arr[m];
   printf("ENTER VALUES OF ARRAY :\n");
   
   for(i=0;i<m;i++)
   {
       scanf("%d",&arr[i]);
// if(arr[i]%2==0)
// {
// even[i]=arr[i];
// }
// else
// {
// odd[i]=arr[i];
// }
   }

   for(i=0;i<m;i++)
   {
      if(arr[i]%2==0)
      { 
         even[j]=arr[i];
         j++;
      }
      else
      {
         odd[k]=arr[i];
         k++;
      }
   }

   printf("\nEVEN INTEGERS IN AN ARRAYS : \n");
   for(i=0;i<j;i++)
   {
       printf("%2d",even[i]);
   }
   
   printf("\nODD INTEGERS IN AN ARRAYS : \n");
   for(i=0;i<k;i++)
   {
       printf("%2d",odd[i]);
   }
}
