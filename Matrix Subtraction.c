#include<stdio.h>
int main()
{
    int i, j, A[50][50], B[50][50],NumOfRow,NumOfCol,C[50][50];

    printf("Enter the number of row & col :");
    scanf("%d %d",&NumOfRow, &NumOfCol);

    printf("Enter Your Elements:\n");
    for(i=0; i<NumOfRow; i++)
    {
        for(j=0; j<NumOfCol; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    printf("A= ");
    for(i=0; i<NumOfRow; i++)

    {
        printf("\t");

        for(j=0; j<NumOfCol; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter Your Elements:\n");
    for(i=0; i<NumOfRow; i++)
    {
        for(j=0; j<NumOfCol; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("B= ");
    for(i=0; i<NumOfRow; i++)

    {
        printf("\t");

        for(j=0; j<NumOfCol; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<NumOfRow; i++)
    {
        for(j=0; j<NumOfCol; j++)
        {
            C[i][j]= A[i][j]-B[i][j];
        }
    }

    printf("\nA-B= ");
    for(i=0; i<NumOfRow; i++)

    {
        printf("\t");

        for(j=0; j<NumOfCol; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }




}
