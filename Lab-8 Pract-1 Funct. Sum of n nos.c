//WAP to prepare the function to add first N numbers.
int nsum(int);
void main()
{
	int n,ans;
	printf("\n\tEnter the Number till which you want SUM : ");
	scanf("%d",&n);
	
	ans=nsum(n);
	
	printf("\n\tSum of %d number : %d",n,ans);
}
    int nsum(int x)
    {
    	int i,sum=0;
    	
    	for(i=1; i<=x; i++)
    	sum+=i;
    	return sum;
	}
