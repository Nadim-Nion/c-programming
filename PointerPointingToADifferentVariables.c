#include<stdio.h>
int main()
{
    int x=1,y=2,z=3;

    int *ptr;

    ptr=&x;
    printf("X=%d\n",*ptr);

    ptr=&y;
    printf("Y=%d\n",*ptr);

    ptr=&z;
    printf("Z=%d\n",*ptr);

    getch();
}
