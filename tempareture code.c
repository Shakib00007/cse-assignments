#include <stdio.h>

int main() {
    float fahrenheit;
    int celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (int)((fahrenheit - 32) * 5 / 9);

    printf("%.2f Fahrenheit is equal to %d Celsius\n", fahrenheit, celsius);

    return 0;
}
