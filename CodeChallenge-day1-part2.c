#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n, k;

    if (scanf("%d", &n) != 1) return 0;

    char arr[n][1001];
    int count[n];

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);

        for (int j = 0; j < n; j++) {
            if (count[j] > 0 && strcmp(arr[j], arr[i]) == 0) {
                count[j]++;
                if (i != j) {
                    count[i] = -1;
                }
                break;
            }
        }
        if (count[i] == 0) {
            count[i] = 1;
        }
    }

    scanf("%d", &k);

    int unique= 0;
    for (int i = 0; i < n; i++) {
        if (count[i] == 1) {
            unique++;
            if (unique == k) {
                printf("%s\n", arr[i]);
                return 0;
            }
        }
    }

    printf("-1\n");

    return 0;
}

