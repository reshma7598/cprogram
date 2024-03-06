#include <stdio.h>

int main() {
    int arr[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int minValue = arr[minIndex];
        for (int k = minIndex; k > i; k--) {
            arr[k] = arr[k-1];
        }
        arr[i] = minValue;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}