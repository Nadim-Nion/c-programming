#include <stdio.h>
int main()
{
    int num[5],n ,value, i ,pos=-1;

     printf("Enter n=");
     scanf("%d",&n);

    printf("Enter the value into Array=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }



    printf(" Enter the value you want to search=");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break ;
        }
    }

    if(pos==-1)
        printf ("The value is not found");
    else
        printf("The position of %d  =%d",value,pos);
}
