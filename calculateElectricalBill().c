/*
Name: Wycliff mutharimi
Reg No: CT101/G/26561/25
Date:21/10/25
Description:convert to celicius
*/

#include <stdio.h>

long calculateElectricBill(long units) {
    long bill = 0;
    if (units <= 0) return 0;
    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }
    return bill;
}

int main(void) {
    long units;
    printf("Enter number of units consumed: ");
    if (scanf("%ld", &units) != 1) return 1;
    long total = calculateElectricBill(units);
    printf("Total bill for %ld units = KSh. %ld\n", units, total);
    return 0;
}