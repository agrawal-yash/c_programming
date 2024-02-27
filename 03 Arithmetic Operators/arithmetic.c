#include <stdio.h>
int main ()
{
	int a, b, add, sub, mul, div, mod;
	printf("Enter values of a & b:");
	scanf("%d%d", &a, &b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	mod = a%b;
	printf("The addition of %d & %d is %d\n",a,b,add);
        printf("The subtraction of %d & %d is %d\n",a,b,sub);
        printf("The multiplication of %d & %d is %d\n",a,b,mul);
        printf("The division of %d & %d is %d\n",a,b,div);
        printf("The modulus of %d & %d is %d\n",a,b,mod);
	return 0;
}
