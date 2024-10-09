#include<stdio.h>


struct Person
{
    int age;
    float salary;
};


int main()
{
    struct Person person1 = {27,35700.38}; // Direct Structure Variable Initialization

    struct Person person2,person3;


    // Elements wise Assignment

    person2.age=25;
    person2.salary=50,500.70;



    // Structure Variable Assignment

    person3 = person2;


   if(person1.age==person2.age && person1.salary==person2.salary)
   {
       printf("Person 1 is equal to Person 2 \n");
   }

   else
   {
       printf("Person 1 is not equal to Person 2 \n");
   }



   if(person2.age==person3.age && person2.salary==person3.salary)
   {
       printf("\n\nPerson 2 is equal to Person 3 \n");
   }

   else
   {
       printf("\n\nPerson 2 is not equal to Person 3 \n");
   }






    getch();

}
