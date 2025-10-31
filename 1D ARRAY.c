/*
Name: wycliff mutharimi
Reg No: CT101/G/26561/25
Date:29/10/2025
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    printf("Enter the revenue for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\n------ Weekly Report ------\n");
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}