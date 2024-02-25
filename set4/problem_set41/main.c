#include <stdio.h>
// This program will store numeric values from the user in an array, depending on the user choice will arrange the values in ascending or descending manner.
int main ()
{ // size of the array , type of sorting
    int size,type;
    printf("Welcome with you in the sorting program\nHow many values you need to sort?\n");
    scanf("%d",&size);
// array declaration & definition
    float arr [size];
    printf("Great! Enter the values:\n");
// array initialization
    for (int i =0; i < size; i++)
    {
        scanf("%f",&arr[i]);
    }
    printf("Okay! you have entered the %d values you want to sort successfully!\n Press 0 for ascending order or 1 for descending order:",size);
    scanf("%d",&type);

// Ascending order
    if (!type)
    { int temp;
        for (int i=0;i<size-1;i++)
        {
            for (int j =0;j<size-i-1;j++)
            {
                if (arr[j]>arr[j+1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    printf("The values after applying ascending sorting:\n");
    for (int j=0;j<size;j++)
    {
        printf("%.2f\n",arr[j]);
    }
    }

// Descending order
    else
    { int temp;
       for (int i=0;i<size-1;i++)
       {
           for (int j=0;j<size-i-1;j++)
           {
               if (arr[j]<arr[j+1])
               {
                   temp = arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
    printf("The values after applying descending sorting:\n");
    for (int j=0;j<size;j++)
    {
        printf("%.2f\n",arr[j]);
    }

    }
    return 0;
}
