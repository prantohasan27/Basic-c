#include<stdio.h>
#include<math.h>


int main()

{
    int row, col, n;

    scanf("%d", &n);

    for(row=0;row<n;row++)
    {
        for(col=1;col<=pow(2,row);col++)

             printf("*");

             printf("\n");


    }







}

