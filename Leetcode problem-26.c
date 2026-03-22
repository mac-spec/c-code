#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0) return 0;
    int k=0;
    for (int j=1;j<numsSize;j++) {
        if (nums[j]!=nums[k]) {
            k++;
            nums[k]=nums[j];
        }
    }
    return k+1;
}
int main()
 {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    if (n == 0) {
        printf("k = 0, array is empty.\n");// Handle empty array case
        return 0;
    }
    int* nums = (int*)malloc(n * sizeof(int));// Allocate memory dynamically
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    // Processing the array
    int k = removeDuplicates(nums, n);
    printf("\nOutput k = %d\n", k);
    printf("Modified array: [");
    for (int i = 0; i < k; i++) {
        printf("%d%s", nums[i], (i == k - 1) ? "" : ", ");
    }
    printf("]\n");
    free(nums);// Clean up memory
    return 0;
}
