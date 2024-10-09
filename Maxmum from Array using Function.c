#include<stdio.h>
int main()
{
    int num[]={10,20,30,40,50};

    int MaximumValue=maximum(num);

    printf(" The Maximum Value= %d\n",MaximumValue);
}

int maximum(int x[])
{
    int i;
    int max = x[0];

    for(i=1;i<5;i++)
    {
        if(max<x[i])
        {
         max=x[i];
        }
    }

    return max;
}
