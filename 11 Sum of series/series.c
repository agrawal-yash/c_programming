#include<stdio.h>
int main()
{
	int i, n, fact = 1;
	double sum = 0.0;
	printf("Enter the range of numbers:");
	scanf("%d",&n);

	for(i=1; i<=n; i++);
	{
		fact = fact*i;
		sum = sum + 1.0/fact;
	}


	printf("The sum of the series is %lf\n", sum);
	return 0;
}
