// sum of the element

#include <stdio.h>
int main(){
    int arr[5]={1,5,40,50,55};
    int sum=0;
    for(int i=0;i<=5;i++){
        sum += arr[i];
    }
    printf("sum of the element: %d\n", sum);
    return 0;
}