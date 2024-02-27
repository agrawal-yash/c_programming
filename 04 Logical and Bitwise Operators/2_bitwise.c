#include <stdio.h>
int main()
{
	int a, b, AND ,OR, XOR, NOT;
	printf("Enter values of a & b:\n");
	scanf("%d%d", &a, &b);
	AND = (a&b);
	OR = (a|b);
	XOR = (a^b);
	NOT = (~a);
	printf("AND operator value = %d\n",AND);
	printf("OR operator value = %d\n",OR);
	printf("XOR operator value = %d\n",XOR);
	printf("NOT operator value = %d\n",NOT);
	printf("Left Shift operator value = %d\n",(a << 1));
	printf("Right Shift operator value = %d\n",(a >> 1));
	return 0;
}
