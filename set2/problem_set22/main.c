#include <stdio.h>
int main ()
{
    // This program takes a number from the user as an input and determine whether it is even or odd.
    // the variable type is int not float because of the definition of even or odd numbers.
    // consider the zero is an even number.
    int num;
    printf("Enter the number: \n");
    scanf("%d",&num);
    if (num % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}
