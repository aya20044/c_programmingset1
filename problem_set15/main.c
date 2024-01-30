#include <stdio.h>
int main ()
{

    // This program will scan 3 numbers from the user and print them in reversed order without using a temporary variable
    int x , y ,z ;
    printf("enter first number: ");
    scanf("%d",&x);
    printf("enter second number: ");
    scanf("%d",&y);
    printf("enter third number: ");
    scanf("%d",&z);
    x = x+z;
    z = x-z;
    x = x-z;
    // the middle number is still in the middle of course
    printf("numbers in reversed order: %d %d %d ",x,y,z);
    return 0;

}
