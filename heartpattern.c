#include<stdio.h>


int main()

{
    int row, col, n;

    scanf("%d", &n);

    for(row=n/2; row<=n; row+=2)
    {
        for(col=1; col<=n-row; col+=2)
            printf(" ");

        for(col=1; col<  row; col++)
            printf("*");

        for(col=1; col<=n-row; col++)
            printf(" ");

        for(col=1; col<=row; col++)
            printf("*");

        printf("\n");

    }

    for(row=n;row>=1;row--)
    {
        for(col=row;col<n;col++)

            printf(" ");

        for(col=1;col<=2*row-1;col++)
            printf("*");

            printf("\n");
    }

}


