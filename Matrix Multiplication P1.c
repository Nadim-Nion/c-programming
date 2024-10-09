#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],r1,r2,c1,c2,i,j;

    printf("Enter the row and col of 1st Matrix:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the row and col of 2nd Matrix:");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf(" Error! Column of 1st Matrix is not equal to row of 2nd\n");

        printf("Enter the row and col of 1st Matrix:");
        scanf("%d %d",&r1,&c1);

        printf("Enter the row and col of 2nd Matrix:");
        scanf("%d %d",&r2,&c2);
    }

    printf("\nEnter Elements of First matrix\n:");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter Elements of Second matrix:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    printf("\nFirst Matrix:\n ");
    for(i=0; i<r1; i++)
    {
        printf("\t");

        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n ");
    for(i=0; i<r2; i++)
    {
        printf("\t");

        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }

}
