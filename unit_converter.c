#include <stdio.h>
int main() {
    float f, c;
    char C = 'C';
    char F = 'F';
    printf(" Enter temperature in Fahrenheit:");
    scanf("%f", &f);
    c = (f - 32) * 5/9;
    printf("\n--- Conversion Result ---\n");
    printf("Fahrenheit: %.2f %c\n", f, F);
    printf("Celsius: %.2f %c\n", c, C);
    return 0;
}