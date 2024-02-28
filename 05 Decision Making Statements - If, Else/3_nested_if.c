#include <stdio.h>
int main()
{
    char username;
    int password;
    printf("Username:");
    scanf("%c", &username);
    printf("Password:");
    scanf("%d",&password);
    if(username =='a')
    {
     if(password==12345)
{
 printf("Login Successfully\n");
}
        else
        {
          printf("Password isincorrect,Try again\n");
        }
       }
      else
       {
printf("Username is incorrect,Try again\n");
       }
}

