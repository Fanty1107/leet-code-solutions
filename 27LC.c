#include <stdio.h>



int removeElement(int* nums, int numsSize, int val) {
    int k = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main(){
    int nums[] = {3,2,2,3};
    int numsSize = 4;
    int val = 3;
    int result = removeElement(nums, numsSize, val);
    printf("%d\n", result);
    printf("Array Elements: ");
    for(int i = 0; i < result; i++){
        printf("[%d]", nums[i]);
    }
    return 0;
}
