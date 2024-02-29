#include <stdio.h>
// This program takes elements(float numbers) from the user and stored them in an array then find all unique values and print them.
int main ()
{   int size;
    int seen[10]={0}; // if number is repeated twice , the index of that number = 1
    printf("How many elements will you enter?\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element:\n");
    for (int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
// find unique elements
    for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if (arr[i]==arr[j])
           {
                printf("%d",arr[i]);
                seen[arr[i]]=1; // to make the number not to be printed twice
           }
        }

    }
    for (int i=0;i<size;i++)
    {
        if (seen[arr[i]]==0) // the numbers that are not repeated
            printf("%d",arr[i]);
    }
}
