// Leetcode Question-1
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include<stdio.h>
 #include<stdlib.h>
 int numsSize,target,i,j;
 int *nums;
 int * returnSize;
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
int* result= malloc(2 * sizeof(int));
for(i=0;i<numsSize;i++)//Taking each element
{
    for(j=i+1;j<numsSize;j++)//taking next elements to compare
    {
  if(nums[i]+nums[j]==target)
  {
    result[0]=i;
    result[1]=j;
    *returnSize=2;
    return result;
  }
}
}
 *returnSize = 0;
    return NULL;
}
int main() {
    int n, target, retSz;
    printf("Enter array size: ");
    scanf("%d", &n);
    int* nums = malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    int* res = twoSum(nums, n, target, &retSz);
    if (res != NULL)
        {
        printf("Indices: [%d, %d]\n", res[0], res[1]);
        free(res); // Free the result array
    }
    else
        {
        printf("No solution found.\n");
    }

    free(nums); // Free the input array
    return 0;
}
