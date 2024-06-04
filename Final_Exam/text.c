#include <stdio.h>
#include <math.h>
#include <stdlib.h> // For abs() function

int main() {
    int n;

    // Get the size of the arrays (assuming A and B have the same size)
    printf("Enter the size of the arrays (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid input: array size must be positive\n");
        return 1;
    }

    int A[n], B[n], difference[n];

    // Get elements for array A
    printf("Enter elements for array A:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &A[i]) != 1) {
            fprintf(stderr, "Error reading input for array A\n");
            return 1;
        }
    }

    // Get elements for array B
    printf("Enter elements for array B:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &A[i]) != 1) {
            fprintf(stderr, "Error reading input for array B\n");
            return 1;
        }
    }

    // Calculate absolute differences and store them in a new array
    for (int i = 0; i < n; i++) {
        difference[i] = abs(A[i] - B[i]);
    }

    // Print the absolute differences
    printf("Absolute differences:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", difference[i]);
    }
    printf("\n");

    return 0;
}
