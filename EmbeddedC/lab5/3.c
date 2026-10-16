
#include <stdio.h>
#include <string.h>

typedef enum {
    History ,
    Science,
    Philosophy,
    Religion
} Category;

typedef enum {
    Available = 1,
    NotAvailable,
    Borrowed
} Status;

typedef struct {
    char title[20];
    char author[20];
    int price;
    Category category;
    Status status;
} Book;

int main(void)
{
    int n;

    printf("Number of books to add (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number of books.\n");
        return 1;
    }

    Book b[100];

    // Adding books
    for (int i = 0; i < n; i++) {
        int c, s;

        printf("\nBook %d\n", i + 1);

        printf("Enter title: ");
        scanf("%19s", b[i].title);

        printf("Enter author: ");
        scanf("%19s", b[i].author);

        printf("Category: 0-History, 1-Science, "
               "2-Philosophy, 3-Religion: ");
        if (scanf("%d", &c) != 1 || c < 0 || c > 3) {
            printf("Invalid category.\n");
            return 1;
        }
        b[i].category = (Category)c;

        printf("Status: 1-Available, "
               "2-NotAvailable, 3-Borrowed: ");
        if (scanf("%d", &s) != 1 || s < 1 || s > 3) {
            printf("Invalid status.\n");
            return 1;
        }
        b[i].status = (Status)s;

        printf("Enter price: ");
        if (scanf("%d", &b[i].price) != 1 ||
            b[i].price < 0) {
            printf("Invalid price.\n");
            return 1;
        }
    }

    int option;

    printf("\n1-Search  2-Change status  3-Count categories\n");
    printf("Choose an operation: ");

    if (scanf("%d", &option) != 1) {
        printf("Invalid option.\n");
        return 1;
    }

    // Searching by first two characters
    if (option == 1) {
        char ser[3];
        int found = 0;

        printf("Enter first two characters: ");
        scanf("%2s", ser);

        for (int i = 0; i < n; i++) {
            if (strncmp(ser, b[i].title, 2) == 0) {
                printf("\nTitle: %s\n", b[i].title);
                printf("Author: %s\n", b[i].author);
                printf("Price: %d\n", b[i].price);
                printf("Category: %d\n", b[i].category);
                printf("Status: %d\n", b[i].status);
                found = 1;
            }
        }

        if (!found)
            printf("No matching book found.\n");
    }

    // Changing status
    else if (option == 2) {
        int y, z;

        printf("Enter book number (1-%d): ", n);
        if (scanf("%d", &y) != 1 || y < 1 || y > n) {
            printf("Invalid book number.\n");
            return 1;
        }

        printf("1-Available, 2-NotAvailable, 3-Borrowed: ");
        if (scanf("%d", &z) != 1 || z < 1 || z > 3) {
            printf("Invalid status.\n");
            return 1;
        }

        b[y - 1].status = (Status)z;
        printf("Status updated successfully.\n");
    }

    // Counting books in each category
    else if (option == 3) {
        int H = 0, S = 0, P = 0, R = 0;

        for (int i = 0; i < n; i++) {
            switch (b[i].category) {
                case History:
                    H++;
                    break;

                case Science:
                    S++;
                    break;

                case Philosophy:
                    P++;
                    break;

                case Religion:
                    R++;
                    break;
            }
        }

        printf("\nHistory: %d\n", H);
        printf("Science: %d\n", S);
        printf("Philosophy: %d\n", P);
        printf("Religion: %d\n", R);
    }

    else {
        printf("Invalid option.\n");
    }

    return 0;
}
