#include <stdio.h>

int main() {
    int intVal = 100;
    unsigned int uIntVal = 250;
    int octalInt = 0144;
    int hexInt = 0x64;
    float floatVal = 45.67f;
    double doubleVal = 123456.789;
    char charVal = 'K';
    char strVal[] = "FAST-NUCES";
    long int longVal = 9876543210L;

    printf("Integer (%%d): %d\n", intVal);
    printf("Unsigned Integer (%%u): %u\n", uIntVal);
    printf("Octal (%%o): %o\n", octalInt);
    printf("Hexadecimal (%%x): %x\n", hexInt);
    printf("Float (%%f): %.2f\n", floatVal);
    printf("Double Scientific (%%e): %e\n", doubleVal);
    printf("Character (%%c): %c\n", charVal);
    printf("String (%%s): %s\n", strVal);
    printf("Long Integer (%%ld): %ld\n", longVal);

    return 0;
}
