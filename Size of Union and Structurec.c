#include<stdio.h>

union test1
{
    int x,y;
    float z;

};

union test2
{
    char ch;

    char  m;

};

union test3
{
    char name[20];

    double d;


};

struct test4
{
    int x;
    int y;
    char ch;

};


int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Size occupied by test1 =%d\n",sizeof(t1));
    printf("Size occupied by test2 =%d\n",sizeof(t2));
    printf("Size occupied by test3 =%d\n",sizeof(t3));
    printf("Size occupied by test4 =%d\n",sizeof(t4));

    getch();
}
