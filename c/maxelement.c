#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {3, 7, 1, 9, 4, 6, 15, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = findMax(arr, size);
    printf("Maximum element in the array: %d\n", maxElement);
    return 0;
}