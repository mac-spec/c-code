#include <stdio.h>
#include <string.h> // Required for strcpy()
// 1. Define the structure blueprint
struct Student {
    char name[50];
    int id;
    int age;
};

int main() {
    // 2. Declare a structure variable
    struct Student student1;
    // 3. Assign values to the structure members using the dot (.) operator
    strcpy(student1.name, "Steve"); // Use strcpy for string/char arrays
    student1.id = 1234;
    student1.age = 30;
    // 4. Access and print the members
    printf("Student Name is: %s\n", student1.name);
    printf("Student Id is: %d\n", student1.id);
    printf("Student Age is: %d\n", student1.age);
    return 0;
}
