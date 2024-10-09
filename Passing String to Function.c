#include<stdio.h>
int main()
{
    char str[]="Nion";

    Display(str);
}


Display(char x[])
{
    int i=0;

    while(x[i]!='\0')
    {
     printf("%c",x[i]);
     i++;
    }

}


