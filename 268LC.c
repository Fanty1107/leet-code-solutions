#include <stdio.h>
int missingNumber(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int expected_sum = numsSize * (numsSize + 1) / 2;
    int actual_sum = 0;
    
    for (int i = 0; i < numsSize; i++) {
        actual_sum += nums[i];
    }
    
    return expected_sum - actual_sum;
}
int main(){
    int nums[3] = {3,0,1};
    printf("%d",missingNumber(nums, 3));
    return 0;
}
