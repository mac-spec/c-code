#include <stdio.h>
#include <stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            int* result = (int*)malloc(digitsSize * sizeof(int));
            for (int j = 0; j < digitsSize; j++) result[j] = digits[j];
            return result;
        }
        digits[i] = 0;
    }
    *returnSize = digitsSize + 1;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i < *returnSize; i++) result[i] = 0;
    return result;
}
int main() {
    int i,size;
    int digits[190];
    printf("Enter tha array size\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
   scanf("%d",&digits[i]);
    int returnSize;
// Call the function
    int* result = plusOne(digits, size, &returnSize);
// Print the result array
    for (i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
free(result);// Clean up
    return 0;
}
