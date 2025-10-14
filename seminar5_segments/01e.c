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
    Book stack_book;
    strcpy(stack_book.title, "Don Quixote");
    stack_book.pages = 1000;
    stack_book.price = 750.0;
    
    Book **p = (Book**)malloc(sizeof(Book*));
    *p = &stack_book;
    print_book(*p);
    free(p);
}