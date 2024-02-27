#include<stdio.h>
int main ()
{
	int emp_id;
	long int mob;
	char gender;
	float salary;
	printf("Enter Employee ID:");
	scanf("%d",&emp_id);
	printf("Enter Mobile No.:");
	scanf("%ld",&mob);
	printf("Enter Gender (M/F):");
	scanf(" %c",&gender);
	printf("Enter Salary:");
	scanf(" %f",&salary);
	printf("Employee ID is %d\n",emp_id);
	printf("Mobile No. is %ld\n",mob);
	printf("Mobile No. is %c\n",gender);
	printf("Salary is %f\n",salary);
	printf("Size of variable Employee ID is %ld\n",sizeof(emp_id));
	printf("Size of variable Gender is %ld\n",sizeof(gender));
	printf("Size of variable Mobile No. is %ld\n",sizeof(mob));
	printf("Size of variable Salary is %ld\n",sizeof(salary));
	return 0;
}




