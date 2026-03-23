#include <stdio.h>
struct info {
    char name[50];
    int roll, s1, s2, s3;
    float avg;};
int main() {
    int maxindex = 0;
    struct info s[3];//setting struct variable as struct array
    printf("Enter details for 3 students (Format: Name Roll Marks1 Marks2 Marks3):\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d: ", i + 1);// The spaces before % symbols are CRITICAL to skip leftover newlines
        if (scanf(" %s %d %d %d %d", s[i].name, &s[i].roll, &s[i].s1, &s[i].s2, &s[i].s3) != 5) {
            printf("Invalid input format. Please enter: Name(String) Roll(Int) 3 Marks(Int)\n");
            return 1;
        }
        s[i].avg = (s[i].s1 + s[i].s2 + s[i].s3) / 3.0;// Dividing by 3.0 ensures we get a precise float average
    }
    for (int i = 1; i < 3; i++) {
        if (s[i].avg > s[maxindex].avg) {
            maxindex = i;//index number of max array element
        }
    }
    printf("\n--- Student with Highest Average ---\n");
    printf("Name: %s\n", s[maxindex].name);
    printf("Roll No: %d\n", s[maxindex].roll);
    printf("Subject 1: %d\n", s[maxindex].s1);
    printf("Subject 2: %d\n", s[maxindex].s2);
    printf("Subject 3: %d\n", s[maxindex].s3);
    printf("Average: %.2f\n", s[maxindex].avg);
    return 0;
}
