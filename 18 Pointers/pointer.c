#include<stdio.h>
void swap(int*,int*);
int main()
{
int a = 10;
int b = 20;
printf("Before swapping in main a = %d & b = %d\n",a,b);
swap(&a,&b);
printf("After swapping in main a = %d & b = %d\n",a,b);
}
void swap(int *x,int*y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("After swapping in function x=%d, y=%d\n",*x,*y);
}
