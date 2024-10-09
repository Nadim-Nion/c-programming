#include<stdio.h>
float area (float b , float h);
int main()
{
    float base, height ;

    printf("Enter the base of Triangle :");
    scanf("%f",&base);

    printf("Enter the base of Triangle :");
    scanf("%f",&height);


    printf(" Area of Triangle = %.2f\n",area(base,height));


}


float area (float b , float h)
{
    return .5*b*h;
}
