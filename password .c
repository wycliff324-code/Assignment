/*
Name: Wycliff mutharimi
Reg No:CT101/G/26561/25
Date:
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "0011") != 0);

    printf("Access Granted\n");
    return 0;
}