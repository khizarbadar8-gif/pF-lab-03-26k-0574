#include <stdio.h>

int main() {
    char ch1, ch2, ch3;

    printf("Enter three characters continuously: ");
    ch1 = getchar();
    ch2 = getchar();
    ch3 = getchar();

    printf("\nYou entered: ");
    putchar(ch1);
    putchar(' ');
    putchar(ch2);
    putchar(' ');
    putchar(ch3);
    putchar('\n');

    return 0;
}
