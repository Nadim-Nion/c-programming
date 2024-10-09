#include<stdio.h>
int main()
{
    char str1[100], str2[100],temp[100];
    printf("Enter your 1st string:");
    scanf("%s",str1);
    printf("Enter your 2nd string:");
    scanf("%s",str2);

    printf("\nBefore swapping\n");
    printf("String 1=%s\n",str1);
    printf("String 2=%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\n\nAfter swapping\n");
    printf("String 1=%s\n",str1);
    printf("String 2=%s\n",str2);

    getch();


}
