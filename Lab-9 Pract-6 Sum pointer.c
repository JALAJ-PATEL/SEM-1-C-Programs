//WAP to enter N different integer numbers and calculate their sum using pointer.
#include<stdio.h>
void main()
{
   int n,*p,i=0,sum=0;
   printf("\n\tENTER TOTAL NO. OF INPUTS : ");
   scanf("%d",&n);
   int arr[n];
   printf("\n\tENTER VALUES: ");

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   while(i<n)
   {
       p=&arr[i];
       sum=sum+(*p);
       i++;
   }
   printf("\n\tSUM OF INPUT NO. : %d ",sum);
}
