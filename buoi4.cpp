#include<stdio.h>
int main()
{
	int n;
	printf("Enter n (n>=2): ");
	scanf("%d",&n);
	if(n<2)
	{
		n=2;
		printf("must be >=2, Enter n (n>=2): %d",n);
		printf("\nmust be >=2, Prime numbers up to %d",n);
	}
	else
	{
		int i, count,j;
		printf("Prime numbers up to %d:",n);
		for(i=2; i<=n;i++)
		{
			count=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				printf(" %d",i);
			}
		}
	}
}
