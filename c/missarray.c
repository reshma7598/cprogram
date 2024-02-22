#include <stdio.h>

int findmissingNumb(int arr[], int size) {
    int total = (size + 1) * (size + 2) / 2; 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingNumb = findmissingNumb(arr, size);
    printf("The missing number is: %d\n", missingNumb);
    return 0;
}