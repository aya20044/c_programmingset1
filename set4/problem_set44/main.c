#include <stdio.h>
// This program from the user an integer number of any length and find out if there are digits are repeated or not.
// i suppose that the user will enter an integer value & there is only one element to be repeated. i will soon enhance the logic of the program.
int repeat (int digits,int size)
 {
     int i=0,reminder=0,repeated=0;
     int seen[10]={0}; // size is 10 because digits from 0 to 9, {0} indicates that it is not seen yet.
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
    return repeated;

 }
int main ()
{   int size,digits,result;
    printf("How many digits you will enter?\n");
    scanf("%d",&size);
    printf("Please enter the digits:\n");
    scanf("%d",&digits);
    result = repeat(digits,size);
    printf("The repeated digit is %d",result);
    return 0;

}
