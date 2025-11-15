// 4_array_of_pointers_books.c
#include <stdio.h>
#include <string.h>

int main() {
    char books[3][50];
    char *ptr[3];

    printf("Enter 3 book names:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d: ", i+1);
        fgets(books[i], 50, stdin);
        books[i][strcspn(books[i], "\n")] = 0; // remove newline
        ptr[i] = books[i]; // assign address
    }

    printf("\nYou entered:\n");
    for(int i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i+1, *(ptr + i));
    }

    return 0;
}
