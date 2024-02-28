#include <stdio.h>
 // This program intends to calculate the summation of each row and each column in 5*5 integer array.
    int main ()
    {
        int matrix [5][5]={0};
// initialize array elements
        printf("Enter the array elements row by row\n");
        for (int i=0;i<5;i++)
        {
            printf("Enter the row %d:\n",i+1);
            for (int j=0;j<5;j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
// rows & columns totals.
    int totalRow[5]={0};
    int totalCol[5]={0};
    for (int x=0;x<5;x++)
    {
        for (int y=0;y<5;y++)
        {
            totalRow[x] += matrix[x][y];
            totalCol[x]+= matrix [y][x];
        }
    }
// print the result
    printf("The Row Totals:");
    for (int z=0;z<5;z++)
    {
        printf(" %d",totalRow[z]);
    }
    printf("\nThe Column Totals:");
    for (int k=0;k<5;k++)
    {
        printf(" %d",totalCol[k]);
    }
      return 0;
    }

