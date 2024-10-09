#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    printf("\nThe square is : %d\n",square(num));
}

int square (int a)
{
    return a*a;
}
