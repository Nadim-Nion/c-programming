#include<stdio.h>
int main()
{
    int first=0,second=1,n,count=0,fib;
    printf("Enter the range:");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fib=count;
        }

        else
        {

            fib=first+second;
            first=second;
            second=fib;
        }

        printf(" %d",fib);
        count++;

    }


}
