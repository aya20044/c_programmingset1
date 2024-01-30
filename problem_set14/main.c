#include <stdio.h>
int main ()
{
    // This program will print the result of some bitwise operations of two operands
    char x = 7, y = 4;
    printf("x | y = %d\n", x|y); // 7
    printf("x & y = %d\n", x&y); // 4
    printf("x ^ y = %d\n", x^y); // 3
    printf("x << 1 = %d\n", x<<1); // 7 * 2^1 =14
    printf("x >> 2 = %d", x>>2); // 7 / 2^2 = 1
    return 0;

}
