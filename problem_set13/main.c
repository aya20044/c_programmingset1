#include <stdio.h>
int main ()
{
    // This program is taking input value from the user as dollars and cents and added 5% tax and printing the result
    float budget, addTax;
    printf("Enter the budget: ");
    scanf("%f",&budget);
    addTax = budget + (budget * .05);
    printf("The amount after adding tax is: %f",addTax);
    return 0;

}
