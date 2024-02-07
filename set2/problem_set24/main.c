#include <stdio.h>
int main ()
{
    // This program asks the user to enter his grade and prints his rating.
    float grade;
    printf("Enter your grade:\n");
    while (1)
    {
        scanf("%f",&grade);
    if (grade <0)
    {
        printf("Please enter correct positive percentage number:\n ");
    }
    else if (grade <=100 && grade >=85)
    {
        printf("Excellent"); break;
    }
    else if (grade<85 && grade >=75)
    {
        printf("Very Good"); break;
    }
    else if (grade < 75 && grade>=65)
    {
        printf("Good");
        break;
    }
    else if (grade<65 && grade >=50)
    {
        printf("Pass"); break;
    }
    else
    {
            printf("Sorry, Fail"); break;
    }

    }
    return 0;

}

