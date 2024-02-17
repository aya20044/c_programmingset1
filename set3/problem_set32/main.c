#include <stdio.h>
// This program will swap two global variables through a function.
int var1 = 100 ,var2 =50; // are available to all functions
void swap (int*,int*); // function declaration
int main ()
{
    printf("Before Swapping\n var1= %d and var2=%d\n",var1,var2);
    swap(&var1,&var2); // calling by reference to change the global variables
    printf("now:\n var1= %d and var2= %d",var1,var2);
    return 0;
}
// function definition
void swap (int *x,int *y) // pointers received the addresses using reference operator *
{
    // swapping without using third variable
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
