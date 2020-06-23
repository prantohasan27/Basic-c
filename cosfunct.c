#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n;
    float x,y,sum;

    printf("Enter the number of x:");
    scanf("%f",&x);
    printf("Enter the number of n:");
    scanf("%d",&n);
    x=x*3.1416/180;
    y=1;
    sum=1;

    for(i=1; i<=n;i++)
    {
        y = y*(-1)*x*x/(2*i*(2*i-1));
        sum+=y;
    }
    printf("cosine function cos(%f) = %.3f:",x,sum);

    getch();
}
