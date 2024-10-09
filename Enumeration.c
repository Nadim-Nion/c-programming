#include<stdio.h>

enum days_of_week {Sun,Mon,Tues,Wed,Thu,Fri,Sat};

int main()
{
    enum days_of_week day1,day2;

    day1=Tues;
    day2=Fri;

    int dif = day2-day1;

    printf("Day Difference =%d\n",dif);


    getch();
}
