#include <stdio.h>
// This program will count how many digit in an real number given by the user using a recursion function.

// function definition
int countDigits1(int num)
{
    if (num ==0)
    {
        return 0; // not 1 because does not affect the result because we add not multiply.
    }
    else
    {
        return 1 + countDigits1(num/10);
    }
}
// function 2 definition
int countDigits2 (float num)
{
    if (num - (int) num ==0)
    {
        return 0;
    }
    else
    {
        return 1 + countDigits2(num * 10);
    }
}
int main ()
{
    int digits_before_point , digits_after_point;
    float num;
    printf("Enter The number to count how many digits in it:\n");
    scanf("%f",&num);
    digits_before_point = countDigits1((int)num);
    printf("The number has %d digits before the fraction point\n",digits_before_point);
    digits_after_point = countDigits2(num - (int)num);
    printf("The number has %d digits after the fraction point\n",digits_after_point);
    return 0;
}
