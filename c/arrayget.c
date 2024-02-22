// #include <stdio.h>
// int main(){
//     int a[5];
//     int i,limit;
//     printf("Enterd array limit");
//     scanf("%d",&limit);
//     printf("Enter a values");
//     for(i=0;i<limit;i++){
//     scanf("%d",&a[i]);
// }
// printf("Enter values are:");
// for(i=0;i<5;i++){
//    printf("%d\t",a[i]);
// }
// return 0;
// }


// sum of element

#include <stdio.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,11};
    int sum=0;
    for(int i=0;i<=5;i++){
        sum += arr[i];
    }
    printf("sum of the element:, %d\n", sum);
    return 0;
}



