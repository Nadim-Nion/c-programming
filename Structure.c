#include<stdio.h>
//Global Structure

struct Person
{
    int age;
    float salary;

};




int main()
{
    struct Person person1,person2;

    // Access at members of  "Person" using dot operator.

    person1.age= 23;
    person1.salary= 12500.74;

    printf("Person 1 :\n");
    printf("Age =%d\n",person1.age);
    printf("Salary =%.2f\n",person1.salary);



    person2.age= 25;
    person2.salary= 21500.74;

    printf("\n\nPerson 2 :\n");
    printf("Age =%d\n",person2.age);
    printf("Salary =%.2f\n",person2.salary);


    getch();
}
