#include <stdio.h>

int main() {
    float num1 = 12.345678f;
    double num2 = 98.7654321098;

    printf("Default Float: %f\n", num1);
    printf("2 Decimal Places: %.2f\n", num1);
    printf("4 Decimal Places: %.4f\n", num1);
    printf("6 Decimal Places: %.6f\n\n", num1);

    printf("Default Double: %lf\n", num2);
    printf("2 Decimal Places: %.2lf\n", num2);
    printf("4 Decimal Places: %.4lf\n", num2);
    printf("6 Decimal Places: %.6lf\n", num2);

    return 0;
}
