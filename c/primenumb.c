#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num <= 3) {
        return 1; 
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; 
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        } 
    }
    return 1; 
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
