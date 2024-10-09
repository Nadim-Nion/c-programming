#include<stdio.h>

struct book
{
    char name[200];
    int price;
};


int main()
{
    typedef struct book Book;
    Book b={"Pollisomaz",300};

    printf("Book Name=%s\n",b.name);
    printf("Book Price=%d\n",b.price);
    getchar();
}
