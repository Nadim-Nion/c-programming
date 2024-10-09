#include<stdio.h>
int main()
{
    FILE *file;

    file=fopen("input.txt","w"); // fopen() has two parameter. 1st parameter is File name and the 2nd parameter is File opening Mode.

    if(file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is opened");

        fclose(file);
    }

    getch();
}
