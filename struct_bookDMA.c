#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
    char publication[100];
    float price;
};
int main() {
    int i,n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
     for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Enter title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Enter author name: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Enter publication: ");
        scanf(" %[^\n]s", books[i].publication);
        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }
    char searchAuthor[100];
    printf("\nEnter the author name to display books: ");
    scanf(" %[^\n]s", searchAuthor);
    printf("\nBooks by %s:\n", searchAuthor);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].author, searchAuthor) == 0) {
            printf("\nBook %d:\n", i + 1);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publication: %s\n", books[i].publication);
            printf("Price: %.2f\n", books[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by %s\n", searchAuthor);
    }
    free(books);
return 0;
}