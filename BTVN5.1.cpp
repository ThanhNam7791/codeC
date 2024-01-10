#include<stdio.h>
int main()
{
	int n;
	printf("So luong phan tu cua mang nay la: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("So luong mang phai lon hon 0!\n");
		printf("So luong phan tu cua mang nay la: ");
		scanf("%d",&n);
		int i;
		int array[n];
		for(i=0;i<n;i++)
		{
			printf("Nhap vao phan tu array[%d]: ",i);
			scanf("%d",&array[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("Phan tu array[%d] la: %d\n",i,array[i]);
		}
	}
	else
	{
		int i;
		int array[n];
		for(i=0;i<n;i++)
		{
			printf("Nhap vao phan tu array[%d]: ",i);
			scanf("%d",&array[i]);
		}
		for(i=0;i<n;i++)
		{
			printf("Phan tu array[%d] la: %d\n",i,array[i]);
		}	
	}
}
