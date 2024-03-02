#include <stdio.h>
#include <stdlib.h> // For exit()

#define MAX 100   //value nu determine chyeanu

void create();    //function nte prototype aanu
void display();
void insert();
void deleteItem();
void search();

int main() {
    int ch;

    while (1) {
        printf("Enter your choice\n");    //optopns (menu)
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Insert\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");

        scanf("%d", &ch);

        switch (ch) {
            case 1:
                create();   //function nte definitions ahne( create ,display,insert,deleteitem,search)
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
};

void create() {
    int n, i,a;
    int a[MAX];

    printf("Enter the number of elements to be added to the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
};
void display() {
}

void insert() {
    printf("elemnets in the array are:");
    for (int i=0;i<=n;i++){
        printf("%d",a[i]);

    }
}

void deleteItem() {
}

void search() {
}


// #include<stdio.h>
// #include<stdlib.h>

// #define MAX 10

// void create();
// void display();
// void insert();
// void deleteItem();
// void search();

// int main (){
//     int ch;
//     printf("Enter your choice");
//     scanf("%d",ch);
//     while(1){
//         printf("1.create");
//         printf("2.display");
//         printf("3.insert");
//         printf("4.deleteItem");
//         printf("5.search");
//         printf("6.exit");
//     };
//     switch (ch) {
//         case 1:
//         create ();
//         break;
//         case 2:
//         display ();
//         break;
//         case 3:
//         insert ();
//         break;
//         case 4:
//         deleteItem();
//         break;
//         case 5:
//         search ();
//         break;
//         case 6:
//         exit (0);
//         break;
//         default:
//         printf("invalid option");
//     }
//     };
// void create(){
//     int n,i,j;
//     int a [MAX];
//     printf("enter the number f array to be added");
//     scanf("%d", n);
// for(i=0;i<=n;i++){
//     printf("%d", &a[i]);
// }
// printf("Array created successfully.\n");
// }
// void display() {
    
// }

// void insert() {
// }

// void deleteItem() {
// }

// void search() {
// };
