/*
Name: wycliff mutharimi 
Reg No:CT101/G/26561/25 
Date:6/11/2025
Description: program to display sales transactions
*/

#include <stdio.h>

int main() {
    FILE *fpt;
    float amount, total = 0.0;

    // Open the file for reading
    fpt = fopen("sales.txt", "r");

    if (fpt == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    // Read from file
    while (fscanf(fpt, "%f", &amount) != EOF) {
        total += amount;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    // close file
    fclose(fpt);

    return 0;
}