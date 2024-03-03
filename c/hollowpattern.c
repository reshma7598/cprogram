#include<stdio.h>
int main(){
    int rows,cols,i,j;
    printf("enter the number of rows :");
    scanf("%d",&rows);
    printf("enter the number of columns :");
    scanf("%d",&cols);
    for(int i=1;i<=rows;i++){
        for(j=1;j<cols;j++){
            if(i==1||i==rows||j==1||j==cols)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

