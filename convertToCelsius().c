/*
Name: Wycliff mutharimi
Reg No: CT101/G/26561/25
Date:21/10/25
Description:convert to celicius
*/
#include <stdio.h>

double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main(void) {
    double f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) return 1;
    double c = convertToCelsius(f);
    printf("%.2f°F = %.2f°C\n", f, c);
    return 0;
}