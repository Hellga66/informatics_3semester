#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    int pages;
    float price;
};

typedef struct book Book;

void print_book(Book* b) {
    printf("Title: %s\nPages: %d\nPrice: %.1f\n", b->title, b->pages, b->price);
}

int main() {
    Book *p = (Book*)malloc(sizeof(Book));
    strcpy(p->title, "Don Quixote");
    p->pages = 1000;
    p->price = 750.0;
    print_book(p);
    free(p);
}