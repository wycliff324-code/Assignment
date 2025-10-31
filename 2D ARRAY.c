/*
Name: wycliff mutharimi
Reg No: CT101/G/26561/25
Date:29/10/2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0));  // seed for randomness

    printf("Room Occupancy for One Branch (5 Floors, 10 Rooms each)\n\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;  // 0 or 1
            if (occupancy[floor][room])
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}