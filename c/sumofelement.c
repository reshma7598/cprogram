// sum of the element


// #include<stdio.h>
// int main(){
//     int numb1,numb2,sum;
//     printf("enter the first number :");
//     scanf("%d",&numb1);
//     printf("enter the second number :");
//     scanf("%d",&numb2);
//     sum=numb1+numb2;
//     printf("sum : %d\n",sum);
//     return 0;
// }



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

