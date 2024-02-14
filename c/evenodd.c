// #include <stdio.h>

// int main() {
//     int num;
    
//     printf("Enter an integer: ");
//     scanf("%d", &num);
    
//     // Check numb is even or odd
//     if (num % 2 == 0) {
//         printf("%d is an even number.\n", num);
//     } else {
//         printf("%d is an odd number.\n", num);
//     }
    
//     return 0;
// }

// EVEN NUMBERS


    // #include<stdio.h>
    // int main(){
    //     int limit=100,i;
    //     for(i=2;i<=limit;i++){
    //         if(i%2==0){
    //         printf("%d \n",i);
    //     }
    // }
    // return 0;
    // }

    // PRIME NUMBERS


//     #include<stdio.h>
//     int main(){
//         // input
//         int n=13,i,flag=0;
//         for(i=2;i<=n/2;i++);{
//             if(n%i==0){
//                 flag=1;
// break;
//             }
//         }
//         if (flag==0)
//         {printf("prime number");
//         }else{
//             printf("notprime number");
//         }
//         return 0;
//     }


  #include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    break ; 
    return 0;
}
