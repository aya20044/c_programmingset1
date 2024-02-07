#include <stdio.h>
int main ()
{
    // This program calculates the factorial of an integer number entered by the user.
    int num , factorial = 1;
    printf("Enter the desired number:\n");
    scanf("%d",&num);
    int i = 1;
    while (i<=num)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d which denoted as ' %d ! 'is: %d",num,num,factorial);
    return 0;
}
