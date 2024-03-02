// #include <stdio.h>

// int main() {
//     int limit=10,i,j;
//     for(i=1;i<=limit;i++)
//     {
//         for(j=0;j<i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//      return 0;
// }


// reverse star pattern

// #include<stdio.h>
// int main(){
//     int rows,i,j;
//     printf("Enter the number of rows: ");
//     scanf("%d",&rows);
//    for(i=rows;i>=1;--i){
//    for(j=1;j<=i;++j){
//    printf("- ");
//    }
//    printf("\n");
//    }
//    return 0;
// }


// pyramid pattern
// #include<stdio.h>

// int main(){
//     int rows,dist,i,j;
//     printf("Enter the number of rows :");
//     scanf("%d",&rows);
//     for(i=1;i<=rows;i++){
//         for(dist=1;dist<=rows-i;dist++){
//             printf(" ");
//         } for(j=1;j<=2*i-1;j++){
//             printf("*  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// reverse star pyramid 

// #include <stdio.h>
// int main() {
//    int rows, i, j, space;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);
//    for (i = rows; i >= 1; --i) {
//       for (space = 0; space < rows - i; ++space)
//          printf("  ");
//       for (j = i; j <= 2 * i - 1; ++j)
//          printf("* ");
//       for (j = 0; j < i - 1; ++j)
//          printf("* ");
//       printf("\n");
//    }
//    return 0;
// }

