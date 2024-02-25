#include <stdio.h>
int main ()
{
// This program accepts an numeric array from the user and gives him the second largest value.
    int size;
    printf("How many values will you enter?\n");
    scanf("%d",&size);
    float array[size];
// initialize the array
    printf("Enter the values:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%f",&array[i]);
    }

// get the second largest element by sorting the array
       float temp;
       for (int k=0;k<2;k++) // number of paths is 2 only,to get the second largest number we do not need to sort whole the array.
        {
            for (int j =0; j<size-k-1;j++)
            {
                if (array[j]>array[j+1])
                {
                    temp = array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
// print the result to the user.
    printf("The second largest number is:%.2f",array[size-2]);
}
