// bubble sort

#include<stdio.h>
int main() {
    int arr[] = {58,75,95,35,25,5,64};
    int n = sizeof(arr) / sizeof(arr[0]);   //calculating

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
        // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}