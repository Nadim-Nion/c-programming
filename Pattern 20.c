#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {    // for printing space
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }

        // for printing stars
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
