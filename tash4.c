#include <stdio.h>

int main() {
    char name[50] = "M. Khizr";
    char rollNo[20] = "26k-0574";
    int age = 19;
    float height = 5.9f;
    double gpa = 3.50;
    char section = 'A';

    printf("--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %s\n", rollNo);
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("GPA: %.2lf\n", gpa);
    printf("Section: %c\n", section);

    return 0;
}
