#include <stdio.h>
int main ()
{
    // This program takes 2 numbers and prints the arithmetical , logical , bitwise operations
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    // Arithmetical Operations
    printf("num1 + num2 = %d\n",a+b);
    printf("num1 - num2 = %d\n",a-b);
    printf("num1 * num2 = %d\n",a*b);
    printf("num1 / num2 = %d\n",a/b);
    printf("num1 %% num2= %d\n",a%b);
    // A random expression
    printf("num1 + num2 * num2 - num1 %% num2 = %d\n", a+b*b-a%b);
    // Logical Operations
    printf("Is num1 > num2 and num2 is not equal to zero? ");
    if (a > b && b!=0 )
        printf("True\n");
    else
    {
       printf("False\n");

    }
    printf("Is num1 or num2 is a negative number? ");
    if (a<0 || b<0)
        printf("True\n");
    else
    {
        printf("False\n");
    }
    printf(" %d is the complement of that expression (a > b )\n ", !(a>b));
    // Bitwise Operations
    printf("num1 & num2 = %d\n ", a&b);
    printf("num1 | num2 = %d\n ", a|b);
    printf("~num1 = %d\n ", ~a);
    printf(" num1<<2 = %d\n ", a<<2);
    printf("num2>>4 = %d\n ", b>>4);
    printf("num1 XOR num2 = %d ", a^b);

    return 0;
}
