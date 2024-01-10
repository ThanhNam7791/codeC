#include<stdio.h>
int checkISBN( int n)
{   int A[11], C[11];
	int k[9]={10,9,8,7,6,5,4,3,2};
	int i,sumn, result=0;
	if (n>1000000)
	{
	for (i=10;i>0;i--)
	{ 	A[i]=n%10;
		n=n/10;
	}
	sumn=0;
	sumn=sumn+A[10];
	for(i=1;i<10;i++)
	{	C[i]=k[i-1]*A[i];
		sumn=sumn + C[i];
	}
	if( sumn %11==0) result=1; }
	return result;
}
int main()
{	int n;
	do
	{	printf("ISBN Validator ============== ISBN (0 to quit): ");
		scanf("%d", &n );
		if (checkISBN(n)==1)  printf("This is a valid ISBN\n\n");
		else printf("This is not a valid ISBN\n\n");
	}
	while(n!=0);
	printf("Have a Nice day");
	return 0;
}

