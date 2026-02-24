#include <stdio.h>

int main() {
    int size, i, j, count;

    printf("Enter the array size: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size];

    printf("Enter array elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    printf("\nOccurrences:\n");
    for(i = 0; i < size; i++) {
        if(visited[i] == 1) continue;

        count = 1;
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
