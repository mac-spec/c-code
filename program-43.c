#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 10
#define MAX_LENGTH 50

int main() {
    // 2D array: 10 rows (strings), 50 columns (characters per string)
    char arr[MAX_STRINGS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int n;

    printf("Enter the number of strings (up to %d): ", MAX_STRINGS);
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        // Reads a full line, including spaces
        fgets(arr[i], MAX_LENGTH, stdin);

        // Remove the trailing newline character added by fgets
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare strings alphabetically
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings using strcpy
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

