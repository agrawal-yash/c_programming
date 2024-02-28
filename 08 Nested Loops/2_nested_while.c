#include<stdio.h>
int main()
{
	int a=1,b=1, num;
	printf("Enter the no. of rows:");
	scanf("%d",&num);
	while(a<=num)
	{
	b=1;
	while(b<=num)
		{
		printf("%d",b);
		b++;
		}
	printf("\n");
	a++;
	}
return 0;
}
