#include<stdio.h>
int main()
{
    int A[3][3],i,j, sum=0;
    printf("Enter the elements of your elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nShow Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }

    printf("\nSum of Diagonal= %d",sum);

}
