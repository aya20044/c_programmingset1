#include <stdio.h>
// This program from the user an integer number of any length and find out if there are digits are repeated or not.
// i suppose that the user will enter an integer value & there is only one element to be repeated. i will soon enhance the logic of the program.
int main ()
{   int size,digits,reminder,repeated;
    printf("How many digits you will enter?\n");
    scanf("%d",&size);
    int seen[10]={0}; // size is 10 because digits from 0 to 9, {0} indicates that it is not seen yet.
    printf("Please enter the digits:\n");
    scanf("%d",&digits);
    int i =0;
    while (i<size)
    {
        reminder=digits%10;
        if (seen[reminder]==1)
        {
            repeated =reminder;
        }
        else
        {
            seen[reminder]=1;
            digits=digits/10;
        }
        i++;
    }
    printf("The repeated digits is %d",repeated);


}
