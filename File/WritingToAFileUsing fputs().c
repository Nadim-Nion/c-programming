#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];

    file=fopen("input.txt","w");

    if(file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter Your University Name:");
        gets(name);

        fputs(name,file);

        printf("File is written successfully\n");
        fclose(file);



    }
    getch();
}
