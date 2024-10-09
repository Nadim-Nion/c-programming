#include<stdio.h>
int main()
{

    char str[100],ch;
    int i,capital,small,digit;

     i=capital=small=digit=0;

    printf("Enter your string :");
    gets(str);

    while((ch=str[i])!='\0')
    {

        if(ch>=65 && ch<=90)
            capital++;

        else if (ch>=97 && ch<=122)
            small++;

        else if (ch>=48 && ch<=57)
            digit++;

        i++;
    }

    printf("Number of Capital letters =%d\n",capital);
    printf("Number of Small letters =%d\n",small);
    printf("Number of Digits =%d\n",digit);

    getch();
}
