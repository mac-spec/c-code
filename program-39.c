#include <stdio.h>
#include<math.h>
struct Distance {
    int feet;
    float inch;
}
 d1, d2, sum;

int main() {
    // Input 1st distance
    printf("Enter 1st distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inch: ");
     scanf("%f", &d1.inch);

    // Input 2nd distance
    printf("Enter 2nd distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inch: ");
     scanf("%f", &d2.inch);

    // Adding distances
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Converting inches to feet if they are >= 12
    if (sum.inch >= 12.0) {
        sum.feet = sum.feet + (int)(sum.inch / 12);
        sum.inch = fmod(sum.inch, 12.0); // Keep fractional part
    }

    printf("Sum = %d\' %.1f\"", sum.feet, sum.inch);
    return 0;
}
