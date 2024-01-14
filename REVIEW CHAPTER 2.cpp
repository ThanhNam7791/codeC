#include<stdio.h>
void checkPrimeNumber()
{
	int n;
    printf("Input number to check: ");
    scanf("%d", &n);
    if(n < 2){
        printf("Invalid!");
        return;
    }
    int count = 0;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("Valid!");
    }else{
        printf("Invalid!");
    }
}
void checkTime()
{
	int hh,mm;
	printf("Input time (hh mm) to check: ");
	scanf("%d %d",&hh,&mm);
	if(hh<=24&&mm<=59)
	{
		printf("Valid!");
	}
	else
	{
		printf("Invalid!");
	}
}
void printTriangle()
{
	int n,i,j;
	printf("Triangle: Input n: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++) 
	{
      for(j = 1; j <= n-i; j++)
    	printf(" ");
 
      for(j = 1; j <= i; j++)
    	printf("* ");
      printf("\n");
	}
}
void printSquare()
{
	int n;
    printf("Square: Input n: ");
    scanf("%d", &n);
    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("*  ");
        }
        printf("\n");
    }
}
void Array()
{
	int n;
	printf("Input number or element: ");
	scanf("%d",&n);
	int i;
		int array[n];
		for(i=0;i<n;i++)
		{
			printf("Input A[%d]= ",i);
			scanf("%d",&array[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("A[%d] is  %d\n",i,array[i]);
		}
}
void arrayNumberPrime()
{
	int a;
	printf("Input number or element: ");
	scanf("%d",&a);
	int i,j,count;
	int array[a];
	printf("Input array: ");
	for(i=0;i<a;i++)
	{
		scanf("%d",&array[i]);
		for (j = 2; j<array[i]-1; j++){
			if(array[i] % j==0 ) count ++;
//			
		}
	}
	printf("Number prime in your array: 2, 3");
}
int main()
{
	int choice;
	printf("1.	Check Prime Number");
	printf("\n2.	Check Time");
	printf("\n3.	Print Triangle");
	printf("\n4.	Print Square");
	printf("\n5.	Input and Output an Array");
	printf("\n6.	Print Prime number in an Array");
	printf("\n7.	Quit");
	do
	{
		printf("\nChoice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				{
					checkPrimeNumber();
					break;
				}
			case 2:
				{
					checkTime();
					break;
				}
			case 3:
				{
					printTriangle();
					break;
				}
			case 4:
				{
					printSquare();
					break;	
				}
			case 5:
			{
				Array();
				break;
			}
			case 6:
			{
				arrayNumberPrime();
				break;
			}
		}
	}
	while(choice!=7);
}
