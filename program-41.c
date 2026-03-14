#include <stdio.h>
#include <math.h>
struct triangle
 {
    int a, b, c;
    double area;
};

int main()
{
    int n;
    printf("number of triangles\n");
    scanf("%d", &n);
    struct triangle t[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &t[i].a, &t[i].b, &t[i].c);
        double s = (t[i].a + t[i].b + t[i].c) / 2.0;
        t[i].area = sqrt(s * (s - t[i].a) * (s - t[i].b) * (s - t[i].c));
    }
    // Sorting triangles by area (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (t[j].area > t[j + 1].area) {
                struct triangle temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
    // Print sorted triangles
    printf("sorted triangles\n");
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", t[i].a, t[i].b, t[i].c);
    }
    return 0;
}
