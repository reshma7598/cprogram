#include <stdio.h>
void twoSum(int* nums, int numsSize, int target, int* indices) {
    int left = 0, right = numsSize - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            indices[0] = nums[left];
            indices[1] = nums[right];
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    int indices[2];
    twoSum(nums, n, target, indices);
    printf("%d%d\n", indices[0], indices[1]);
    return 0;
}