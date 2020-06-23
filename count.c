#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main()

{
    int i, vo,cons,digit, word, other;

    char str[100],c;


    i=vo=cons=digit=word=other=0;

    scanf("%[^\n]",str);

    while((c = tolower(str[i++])) !='\0')

    {

            if (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u')

                ++vo;

            else

                ++cons;


            if( c>= '0' && c<= '9')

            {
                ++digit;
            }






}

printf(" %d %d %d \n",vo,cons, digit);


}
