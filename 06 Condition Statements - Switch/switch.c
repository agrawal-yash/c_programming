#include<stdio.h>
int main()
{
	int a,b,Result;
	int ch;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo\n");
	printf("Enter your Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		Result = a+b;
		printf("Sum of %d and %d is %d \n",a,b,Result);
		break;
	case 2:
	        Result = a-b;
        	printf("Difference of %d and %d is %d \n",a,b,Result);
        	break;
	case 3:
        	Result = a*b;
        	printf("Product of %d and %d is %d \n",a,b,Result);
        	break;
	case 4:
        	Result = a/b;
        	printf("Division of %d and %d is %d \n",a,b,Result);
        	break;
	case 5:
        	Result = a%b;
        	printf("Modulo of %d and %d is %d \n",a,b,Result);
        	break;
	default:
	printf("Please enter correct choice!");
	break;
	}
	return 0;
}
