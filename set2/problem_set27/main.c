#include <stdio.h>
int main ()
{
    // This program reads 10 numbers and prints their summation and average.
    float val,total,average;
    int i = 0;
    while (i < 10)
    {
        printf("Enter the value number %d:\n",i+1);
        scanf("%f",&val);
        total += val;
        i++;
    }
    average = total / 10;
    printf("Summation: %.3f\n",total); // 3 numbers after the fraction point for better clearer output.
    printf("Average: %.3f",average);
    return 0;
}
