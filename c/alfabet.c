#include <stdio.h>
void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
void selectionSort(char *arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0)
                min_idx = j;
        }
        swapStrings(&arr[min_idx], &arr[i]);
    }
};
int main() {
    char *arr[] = {"banana", "apple", "orange", "grape", "kiwi"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array of strings:\n");
    for (i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Sorted array of strings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");

    return 0;
}
