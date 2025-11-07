/*
Name: wycliff mutharimi 
Reg No:CT101/G/26561/25 
Date:6/11/2025
Description: program to dispaly the results of students
*/
#include <stdio.h>

struct Student {
    char name[40];
    int regNo;
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student st;
//open the file
    fp = fopen("results.dat", "rb");
    if(fp == NULL) {
        printf("Cannot open results.dat\n");
        return 1;
    }
//display the result
    printf("Student Results:\n\n");
//read from the file
    while (fread(&st, sizeof(st), 1, fp) == 1) {
        printf("Name: %s\n", st.name);
        printf("Total Marks: %.2f\n\n", st.totalMarks);
    }
//close the file
    fclose(fp);
    return 0;
}