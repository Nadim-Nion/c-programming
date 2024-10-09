#include<stdio.h>
int main()
{
    FILE *file;
    char fname[40];
    char mname[40];
    char lname[40];
    int age;

    file=fopen("input.txt","r");

    if(file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is opened\n");

        fscanf(file,"%s %s %s %d\n",&fname,&mname,&lname,&age);
        printf("%s %s %s %d\n",fname,mname,lname,age);
        fclose(file);
    }

    getch();
}
