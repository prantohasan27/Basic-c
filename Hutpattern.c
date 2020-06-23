#include<stdio.h>


int main()

{
    int row, col, n;

    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)

            printf(" ");

        for(col=1; col<=2*row-1; col++)

            printf("*");

        printf("\n");


    }
   for(col = 0; col < 9; col++){
             if((int)(col/3) == 1)
                 printf(" ");
             else
                 printf("*");



}

}



