#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX 100

void create();
void display();
void insert();
void deleteItem();
void search();

int main() {
    int ch;

    while (1) {
        printf("Enter your choice\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert();
                break;
            case 4:
                deleteItem();
                break;
            case 5:
                search();
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}

void create() {
    int n, i;
    int a[MAX];

    printf("Enter the number of elements to be added to the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array created successfully.\n");
}

void display() {
}

void insert() {
}

void deleteItem() {
}

void search() {
}
