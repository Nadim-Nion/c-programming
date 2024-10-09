#include<stdio.h>
int main()
{
    int array[]= {10,20,30};

    Display(array);
}

void Display(int x[50])
{
    int i;

    for(i=0; i<3; i++)
    {
        printf("%d ",x[i]);
    }
}
