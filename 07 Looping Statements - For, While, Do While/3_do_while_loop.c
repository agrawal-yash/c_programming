#include<stdio.h>
int main()
{
	int n,reverse=0,remainder;
	printf("\nEnter the number:");
	scanf("%d",&n);
	do
	{
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
	} while(n>0);
	printf("\nThe reverse number is %d\n",reverse);
	return 0;
}
