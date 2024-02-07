#include <stdio.h>
int main ()
{
    // This program mimics the system of logging on any website, asking the user to enter his/her ID and id the ID exists asking for the password
    // giving the 3 tries only.
    int userID , userPass;
    printf(" Enter Your ID:\n");
    do
    {
        scanf("%d",&userID);
        if (userID==1234)
        {
            printf("enter the password you have only 3 tries:\n");
            break;
        }
        printf("Try Again:\n");

    } while (1);
    // Password entry phase after making sure that the ID exists.
    int i =3;
    do
    {
        scanf("%d",&userPass);
        if (userPass==5678)
        {
            printf("Welcome with you"); break;
        }
        i--;
        if (i>0)
        printf("You are not registered , %d tries again:\n",i);

    } while (i);
    if (i==0)
        printf(" No More Tries!!!");
    return 0;
}
