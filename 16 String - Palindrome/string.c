#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,n=0,c=0;
printf("Enter the string:");
scanf("%s",s);
	for(i=0; s[i]!='\0'; i++)
	{
	n++;
	}
for(i=0;i<n/2;i++)
	{
	if(s[i]==s[n-i-1])
	c++;
	}
if(c==i)
printf("String is a palindrome\n");
else
printf("String is not a palindrome\n");
return 0;
}

