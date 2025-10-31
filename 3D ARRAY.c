/*
Name: wycliff mutharimi
Reg No: CT101/G/26561/25
Date:29/10/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied rooms: %d\n", branch + 1, branchOccupied);
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}