#include<stdio.h>
int main()
{
    FILE *file;
    char name[100];
    int age;

    file = fopen("input.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter Your Name:");
        gets(name);

        printf("Enter Your Age:");
        scanf("%d",&age);

        fprintf(file,"Name = %s , Age = %d\n" , name,age);

        printf("File is written successfully");
        fclose(file);
    }

    getch();
}
