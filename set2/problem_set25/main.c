#include <stdio.h>
int main ()
{
    // This program will print the maximum of 3 input numbers from the user.
    // The best type of variables is float.
    float x,y,z,max;
    printf("enter the first number: \n");
    scanf("%f",&x);
    printf("enter the second number: \n");
    scanf("%f",&y);
    printf("enter the third number: \n");
    scanf("%f",&z);
    if (x>y && x>z)
        max = x;
    else if (y>x && y>z)
        max = y;
    else
        max = z;
    printf("The maximum number is: %f\n ",max);
    return 0;

}
