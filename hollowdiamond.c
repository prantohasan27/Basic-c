#include<stdio.h>


int main()

{
    int row, col, n;
    scanf("%d", &n);
    for(row=0; row<n; row++)
    {
        for(col=0; col<n; col++)

        { printf(" ");



            if(col+row == n/2 || row+col == n-1+(n/2) || col == row+(n/2)|| row == col+(n/2))


                printf("*");

            else

                printf(" ");

        }

                printf("\n");

    }



}


