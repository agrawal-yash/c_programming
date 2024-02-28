#include<stdio.h>
int main()
{
	int dig, num, copy, sum, prod;
	printf("\nEnter your number:");
	scanf("%d", &num);
	copy = num;
	sum = 0;
	prod = 1;
	while(num > 0)
	{
		dig = num % 10;
		sum = sum + dig;
		prod = prod * dig;
		num = num/10;
	}
	printf("The sum of the digits of %d is %d\n",copy,sum);
	printf("The product of the digits of %d is %d\n",copy,prod);
	return 0;
}
