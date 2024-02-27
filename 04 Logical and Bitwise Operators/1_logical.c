#include <stdio.h>
int main()
{
int a,b;
printf("Enter values of a & b:");
scanf("%d%d",&a,&b);

if (a>b && a!=0)
{
	printf("&& Operator : Both conditions are true\n");
}
if (b>a || a==0)
{
	printf("|| Operator : Only one condition is true\n");
}
if (!(a>b && a!=0))
{
	printf("! Operator : Both conditions are not true\n");
}
else
{
	printf("! operator : Both conditions are true. But, status is inverted as false\n");
}
return 0;
}
