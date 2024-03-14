#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the cross pattern: ");
    scanf("%d", &size);

    // Loop for rows
    for (int i = 0; i < size; i++) {
        // Loop for columns
        for (int j = 0; j < size; j++) {
            // Check if it's the center or part of the diagonal
            if (i == size / 2 || j == size / 2 || i == j || i + j == size - 1) {
                printf("* ");
            }
            else if (i==3) {
                printf(" ");
            }else {
                printf("  "); // Print space for other positions
            }
        }
        printf("\n");
    }

    return 0;
}
//this is not full code.
