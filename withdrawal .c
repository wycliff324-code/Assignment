/*
Name:Wycliff mutharimi
Reg No:CT101/G/26561/25
Date:
*/
#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter your starting balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;
        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Insufficient funds. Transaction stopped.\n");
        }
    }

    return 0;
}