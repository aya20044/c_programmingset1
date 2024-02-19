#include <stdio.h>
// This program for logging process called login function.
int user_name = 12345, password = 67899, input_name,input_pass;

void login (int user_name , int password)
{
    do
    {
        printf("Enter your user name:\n");
        scanf("%d",&input_name);
        printf("Enter your password:\n");
        scanf("%d",&input_pass);
        if (input_name == user_name && input_pass == password)
        break;
        else
            printf("Try to login again, you are not registered!");
    } while (1);

    printf("welcome, your logging process has been done correctly");
}
int main ()
{
    login(user_name,password);
}
