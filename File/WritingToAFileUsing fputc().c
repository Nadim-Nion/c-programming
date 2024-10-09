#include<stdio.h>
int main()
{
    FILE *file;

    char name[20]="Nadim Mahmud Nion";
    int length = strlen(name);
    int i ;

    file = fopen("input.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist");
    }

    else
    {
        printf("File is opened\n");

        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }

        printf("File is written successfully\n");
        fclose(file);
    }
    getch();
}
