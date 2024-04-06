//WAP to accept marks for three subjects of five students. Calculate and 
//print, percentage of each student, highest marks in each subject and avg marks of each subject. 

#include<stdio.h>
void main()
{
	int stud[5][3],avg[3],high[3],i,j,sum=0;
	float per[5];
	
//Entry of marks in 2-D Array
    
    printf("\n\tEnter the Marks of \n1)Chemistry, 2)Maths, 3)Physics : \n");
    
    for(i=0; i<5; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		scanf("%d",&stud[i][j]);
    		sum +=stud[i][j];
		}
	    per[i]= sum/3.0;
	    sum=0;
	}
//Finding Average and Highest of Each Subjects

    sum=0;
    for(j=0; j<3; j++)
    {
    	for(i=0; i<5; i++)
    	{
    		sum += stud[i][j];
    		if(i==0)
    		high[j]=stud[i][j];
    		if(stud[i][j]>high[j])
    		high[j]=stud[i][j];
		}
		avg[j]=sum/5;
		sum=0;
	}
	
//Printing the Results of Students

    printf("\n\n\tPERCENTAGE OF EACH STUDENT : ");
    for(i=0; i<5; i++)
    printf("\n\tPercentage of Student %d = %4.2f",i+1,per[i]);
    
    printf("\n\n\tAVERAGE OF EACH SUBJECTS : ");
    for(i=0; i<3; i++)
    printf("\n\tAverage of Subject %d = %d",i+1,avg[i]);
    
    printf("\n\n\tHIGHEST SCORES IN EACH SUBJECTS : ");
    for(i=0; i<3; i++)
    printf("\n\tHighest Scores in Subject %d = %d",i+1,high[i]);
    
}
