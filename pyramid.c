#include <stdio.h>
int main()
{
    int row, c, n;

    printf("Enter the number of pattern");
    scanf("%d", &n);

    for (row = 1; row <=n; row++)  // Loop to print rows
    {
        for (c =1; c<=row; c++)  // Loop to print spaces in a row
            printf(" %c",c+64);



        printf("\n");
    }

     for (row = n-1; row >=1; row--)  // Loop to print rows
    {
        for (c =1; c<=row; c++)  // Loop to print spaces in a row
            printf(" %c",c+64);



        printf("\n");
    }



    return 0;
}
