#include <stdio.h>
int main ()
{
// This program asks the user to enter the result of 3×4 if his answer is right thanks will be printed, otherwise he has other tries until the correct ans.
   int i = 0;
   printf("Enter the result of 3x4: ");
   do
   {
    scanf("%d",&i);
    if (i==12)
        break;
    printf("Try Again, enter the value:\n");

   } while (1);
   printf("Thanks");
   return 0;
 }
