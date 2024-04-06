//WAP to find maximum and minimum element in an array. Array size must be 10.
#include<stdio.h>
void main()
{
   int n,max,min,i;
   int arr[10];
   
   for(i=0;i<10;i++)
   {
       printf("ENTER NUMBER %d : ",i+1);
       scanf("%d",&arr[i]);
       
	   if(i==0)
       {
        max=arr[i];
        min=arr[i];
       }
       
	   if(arr[i]>max)
       {
        max=arr[i];
       }
       
	   if(arr[i]<min)
       {
        min=arr[i];
       }
    } 
    printf("\n\tMAX NUMBER : %d\n\tMIN NUMBER : %d",max,min);
}

