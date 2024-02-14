// # include <stdio.h>
// int main () {
//     int number,i,sum=0;
//     printf("Enter a number");
//     scanf("%d", &number);
//     for(i=1;i<=number;i++){
//        sum=sum+i;
//        }
//        printf("result=%d",sum);
//        return 0;
// }



// sum of two numbers 

# include <stdio.h>
int main () {
    int num1,num2,sum;
    printf("Enter first number:");
scanf("%ld",&num1);

printf("Enter second number:");
scanf("%ld",&num2);

sum=num1+num2;
printf("sum:%ld\n",sum);
return 0;
}

