#include <stdio.h>
int main ()
{
    // This program calculates employee salary in a week based on his working hours, hour
    //rate is 50, but if the working hours are less than 40 hours, a 10% deduction will be applied.
    float hours,salary;
    printf(" How many hours of working you spend in this week?");
    scanf("%f",&hours);
    salary = hours * 50;
    if (hours < 40)
        printf(" Your salary after '10%' deduction is: %f ",salary-(.1*salary));
    else
        printf("Your salary this week is: %.3f",salary);
    return 100;
}
