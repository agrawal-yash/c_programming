#include<stdio.h>
void main()
{
	int a[100];
	int i, j, n, temp;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	for (i = 0; i<= n-1; i++)
	{
		printf("Enter the value:");
		scanf("%d",&a[i]);
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<(n-i-1); j++)
		{
			if (a[j] > a[j+1])
			{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
		}
	}
	for(i=0; i<n;i++)
	{
	printf("%d\n", a[i]);
	}
}
