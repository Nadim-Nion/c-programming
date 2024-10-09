#include<stdio.h>
int main()
{
    double base , exponent;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Exponent : ");
    scanf("%lf",&exponent);

    CalculatePower(base,exponent);
}


void CalculatePower(double base , double exponent)
{
    double i , result=1;

    for(i=1;i<=exponent;i++)
    {
        result= result*base;
    }

    printf(" The result is=%lf\n",result);
}

