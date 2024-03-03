// solid pattern

// #include <stdio.h>

// int main() {
//     int rows, cols, i, j;
    
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     printf("Enter number of columns: ");
//     scanf("%d", &cols);

//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= cols; j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }



// diamond pattern

#include <stdio.h>

int main() {
    int rows, i, j, space;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for(i = rows - 1; i >= 1; i--) {
        for(space = 1; space <= rows - i; space++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
