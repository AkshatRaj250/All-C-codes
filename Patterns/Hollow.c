//hollow square

#include <stdio.h>

int main() {
    int i, j, rows, cols;

    // User input for number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Loop to print the hollow square pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            // Print star for border positions
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("*");
            } else {
                printf(" "); // Print space for inner positions
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}