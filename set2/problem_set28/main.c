#include <stdio.h>
int main ()
{
    // This program will display the multiplication table of a given integer by the user.
    // Multiplication Table >> Each number from 1 to 10 multiplied by the given integer.
    int num;
    printf("Enter the integer number you need its multiplication table:\n");
    scanf("%d",&num);
    printf("The Multiplication Table of %d is:\n",num);
    for (int i =1; i<=10;i++)
    {
        printf(" %d * %d = %d\n",i,num,i*num);
    }
    return 0;


}
