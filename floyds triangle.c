#include<stdio.h>


int main()

{
    int row, col, n,c=0;

    scanf("%d", &n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)

                printf("%d  ",++c);

                printf("\n");




    }
}

