#include <stdio.h>

int main() {
    int arr[] = {1, 5, 12,3,5,22,500,100,300,100};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, isUnique;

    printf("The unique elements found in the array are: ");

    for (i = 0; i < n; i++) {
        isUnique = 1;

        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

