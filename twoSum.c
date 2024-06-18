#include <stdio.h>
#include <stdlib.h>

void findTwoSum(int nums[], int numsSize, int target, int result[])
{
    for (int p1 = 0; p1 < numsSize; p1++) {
        int numberToFind = target - nums[p1];
        for (int p2 = p1+1; p2 < numsSize; p2++) {
            if (numberToFind == nums[p2]) {
                result[0] = p1;
                result[1] = p2;
                return;
            }
        }
    }

    result[0] = -1;
    result[1] = -1;
}

int main(int argc, char *argv[])
{
    int nums[] = {1,2,3,4,9};
    int result[2];
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    findTwoSum(nums, numsSize, 11, result);
    if (result[0] != -1 && result[1] != -1) {
        printf("Indices: %d, %d\n", result[0], result[1]); 
    } else {
        printf("No two sum solution\n");
    }

    return 0;
    
}