#include<stdio.h>
int main(){
    int size=5;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i == size/2){
            printf("*");
            }else{
        if(j==size/2){
           printf("*");
               }else{
                printf(" ");
               }
               }
            }
            printf("\n");
        }
        return 0;
    }
