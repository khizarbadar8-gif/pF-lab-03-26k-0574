#include <stdio.h>

int main() {
    char fullName[50];
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); 

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("\n--- Output ---\n");
    printf("Age: %d\n", age);
    puts("Full Name:");
    puts(fullName);

    return 0;
}
