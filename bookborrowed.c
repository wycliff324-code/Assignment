/*
Name: wycliff mutharimi 
Reg No:CT101/G/26561/25 
Date:6/11/2025
Description:program to keep tracks of titles of books borrowed
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char title[100];
// open file
    fp = fopen("borrowed_books.txt", "a");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fflush(stdout);        
    fgets(title, sizeof(title), stdin);

    // remove newline
    title[strcspn(title, "\n")] = '\0';

    fprintf(fp, "%s\n", title);
    fclose(fp);

    printf("Book title saved successfully!\n");

    return 0;
}