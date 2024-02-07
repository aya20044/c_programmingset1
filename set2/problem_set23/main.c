#include <stdio.h>
int main ()
{
    // This program takes an ID user and checks if it exists or not, if it exists his name will be printed else the default will be printed.
    // because of the "Available IDs" have no alphanumeric characters and the length of IDs is short so int type will be used.
    int userId;
    printf("Enter your ID: \n");
    scanf("%d",&userId);
    // the ID is constant integer so it is better to use switch construct instead of long else if construct.
    switch (userId)
    { // default statement wherever it is, it will be evaluated last.
        default: printf("Wrong ID");
                 break; // is mandatory in this context of the program.

        case 1234: printf("Harry");
                   break;
        case 5678: printf("Ron");
                   break;
        case 1145: printf("Hermione");
                   break;

    }
    return 0;
}
