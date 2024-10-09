#include<stdio.h>
int main()
{
    int x=10,y=20;

    printf("Before Swapping x=%d , y=%d",x,y);


    swapping(&x,&y);

    getch();
}

void swapping(int *ptr1, int *ptr2)
{
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("\nAfter Swapping x=%d , y=%d",*ptr1,*ptr2);
}
