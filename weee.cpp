#include <stdio.h>

int main() {
    int n = 5;  // Number of rows in the pyramid

    for (int i = 1; i <= n; i++) {
        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }

        // Print numbers in descending order
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
