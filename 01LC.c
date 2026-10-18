#include <stdio.h>
#include <stdlib.h>
#define NUM_SIZE 4

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                int *result = malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(){
    int nums[NUM_SIZE] = {2,7,11,15};
    int target = 9;
    int return_size = 0;
    int *result = twoSum(nums, NUM_SIZE, target, &return_size);
    for(int i = 0; i < return_size; i++){
        printf("%d\n", result[i]);
    }
    return 0;
}
