#include <stdio.h>

#define NUM_SIZE 3

int singleNumber(int* nums, int numsSize) {
    int number = 0;

    for(int i = 0; i < numsSize; i++){
        number ^= nums[i];
    }
    return number;
}

int main(){
    int nums[3] = {2,2,1};
    printf("%d\n", (nums[2]^nums[0]));
    printf("%d",singleNumber(nums, NUM_SIZE));
    return 0;
}
