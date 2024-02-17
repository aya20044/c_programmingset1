#include <stdio.h>
#include <stdbool.h>
// This program takes 2 numbers from the user, gets maximum of them using a function and returned the result to the main function to print it.
// float is the best data type to allow the user enter any real number.
// function declaration is necessary here because the definition will be after the calling statement.
float Get_Max (float,float);
int main ()
{   float a,b,max;
    printf("Enter any 2 real numbers and the program will give you the maximum of them:\n");
    printf("Enter the first number:\n");
    scanf("%f",&a);
    printf("Enter the second number:\n");
    scanf("%f",&b);

    // calling by value because float type is not too large in size like classes or structs so it is not bad to make a copy of the variables.
    max = Get_Max(a,b);
    printf("The Maximum of the 2 numbers is: %.3f",max);
    return 0;
}

// function definition
float Get_Max(float a,float b)
{
    return a>b ? a : b; // conditional operator provides less lines of code
}
