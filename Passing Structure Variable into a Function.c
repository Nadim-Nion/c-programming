#include<stdio.h>


struct Person
{

  char name[20];
  int age;
  float salary;

};

int main()
{
   struct Person person1;

   /* person1.name="Nadim Mahmud Nion";
   we can't directly initialize a string into a structure. That's why we have to use strcpy() function */

   strcpy(person1.name,"Nadim Mahmud Nion");
   person1.age=23;
   person1.salary=27000.00;

   display(person1); // Here person1 is a argument or structure variable

   getch();
}


void display (struct Person p) // p is a parameter , struct is a datatype and Person is a structure name . person1 has taken all attribute from Person.
{
    printf("Name= %s\n",p.name);// All attribute of person1 has come into p variable.
    printf("Age= %d\n",p.age);
    printf("Salary= %.2lf\n",p.salary);
}
