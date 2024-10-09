#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];

    file = fopen("input.txt","r");

    if(file==NULL)
    {
        printf("The File does not exist");
    }

    else
    {
        printf("The File is opened\n");

        while(!feof(file))
        {
            fgets(ch,40,file);
            printf("%s\n",ch);
        }

        fclose(file);
    }

    getch();
}
