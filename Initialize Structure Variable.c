#include<stdio.h>


struct Person
{
    int age;
    float salary;
};


int main()
{
    struct Person person1 = {27,35700.38}; // Direct Structure Variable Initialize

    struct Person person2,person3;


    // Elements wise initialize

    person2.age=25;
    person2.salary=50,500.70;



    // Structure Variable Initialize

    person3 = person2;


    printf("Person 1 :\n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\n\nPerson 2 :\n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);


    printf("\n\nPerson 3 :\n");
    printf("Age = %d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

    getch();

}
