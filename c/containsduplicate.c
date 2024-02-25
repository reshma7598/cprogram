#include <stdio.h>
int containsDuplicate(int nums[], int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return 1; // true
            }
        }
    }
    return 0; // false
}

int main() {
    int size;
    scanf("%d", &size); // Input size of the array
    int array[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    if (containsDuplicate(array, size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
