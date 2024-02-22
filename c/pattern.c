// input
#include<stdio.h>
int main() {
    int rows,i,j;     
    printf("Enter the number of rows: ");    //rows entering
    scanf("%d" , &rows);
    for(i=rows;i<=1;--i){        //i value nu loop iterate cheyunn
        for(j=1;j<=i;++j){
            printf("* ");     //star printing
        }
        printf("\n");   //new line
    }
    return 0;
}