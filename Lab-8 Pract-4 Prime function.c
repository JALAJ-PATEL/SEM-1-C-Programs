//Write a function Prime that returns 1 if its argument is prime and returns 0 otherwise.
int prime(int);
void main()
{
	int n,ans;
	printf("\n\tEnter the Number : ");
	scanf("%d",&n);
	
	ans=prime(n);
	
	if(ans==1)
	printf("\n\t%d is a PRIME NUMBER",n);
	else if(ans==0)
	printf("\n\t%d is NOT a PRIME NUMBER",n);
}
    int prime(int x)
    {
    	int i,n;
    	for(i=2; i<=x; i++)
    	{
           if(x%i==0)
           return 0;
           else
           return 1;
        }
	}
