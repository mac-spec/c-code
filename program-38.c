#include <stdio.h>
#include <string.h> // Required for strcpy

struct info
{
    char name[100];
    char grade;
    int age;
    float gpa;
};
int main()
{
    struct info I;
    // Use strcpy for char arrays
    strcpy(I.name, "Riya");
    I.age = 19;
    I.grade = 'O';
    I.gpa = 9.5;
    printf("%s\n%d\n%c\n%.1f", I.name, I.age, I.grade, I.gpa);
    return 0;
}
