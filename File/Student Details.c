#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age, phone,i,num;

    file=fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter the number of students:");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
            printf("Enter the student's name:");

            scanf("%s",&name);

            printf("Enter the student's age:");
            scanf("%d",&age);

            printf("Enter the student's Phone:");
            scanf("%d",&phone);


            fprintf(file,"\n%s\t\t%d\t\t%d",name,age,phone);

        }

        fclose(file);
    }

    getch();
}
