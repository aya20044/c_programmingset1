#include <stdio.h>
int main ()
{
    // This program will draw a pyramid of stars with height entered by the user. (equilateral)
    // Simply, the height represents the no. rows.
    // using this formula [( 2*rows)-1] we will calculate the no. columns.
    int rows,i,j;
    printf("Enter the height of your beautiful pyramid:\n");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2*rows)-1; j++)
        {
            if (j>= rows-(i-1) && j<= rows+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
