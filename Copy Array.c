#include<stdio.h>
int main()
{
    int array1[50], array2[50], n, i ;

    printf("How many numbers:");
    scanf("%d",&n);

    printf(" Enter your numbers :");
    for(i=0; i<n; i++)
    {
        scanf("%d", & array1[i]);
    }

    printf("Array1 = ");
    for(i=0; i<n; i++)
    {
        printf("%d",array1[i]);
    }


    for(i=0; i<n; i++)
    {
        array2[i]= array1[i];
    }

    printf("\n Array2 =");
    for(i=0; i<n; i++)
    {
        printf("%d",array2[i]);
    }

    getch();


}
