#include<stdio.h>
int main(){
    int number[5],i;
    printf("Enter 5 numbers: \n");
    for(int i=0;i<5;++i){
        scanf("%d",&number[i]);
    };
    // Display
    printf("Elements of array are:\n");
    for(int i=0;i<5;++i){
        printf("%d ",number[i]);
    }
    return 0;
};
