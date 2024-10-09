#include<stdio.h>

//Global Structure

struct Person
{
    int age;
    float salary;

};

//Global Variable
struct Person person1,person2;


// Benefit of Global Structure and Global Variable : We can access these from any kind of function.


int main()
{
    // We can declare Structure into the main(). Then it will be called as Local Structure.



    // We can Access into the  members of  "Person" (Structure Name) using dot operator.


    printf(" Enter information for Person 1 :\n ");
    printf("Enter Age :");
    scanf("%d",&person1.age);

    printf("Enter Salary :");
    scanf("%f",&person1.salary);


    printf("\nPerson 1 :\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);



    printf("\n\nEnter information for Person 2 :\n ");
    printf("Enter Age :");
    scanf("%d",&person2.age);

    printf("Enter Salary :");
    scanf("%f",&person2.salary);


    printf("\nPerson 2 :\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);


    getch();

}

