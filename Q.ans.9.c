#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    int highest_odd = -100000, highest_even = -100000; // Initialize to very low values

    // Input numbers
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Check if the number is odd or even and update the highest values
        if (numbers[i] % 2 == 0) {
            if (numbers[i] > highest_even) {
                highest_even = numbers[i];
            }
        } else {
            if (numbers[i] > highest_odd) {
                highest_odd = numbers[i];
            }
        }
    }

    // Display results
    if (highest_even != -100000) {
        printf("\nThe highest even number is: %d\n", highest_even);
    } else {
        printf("\nNo even numbers were entered.\n");
    }

    if (highest_odd != -100000) {
        printf("The highest odd number is: %d\n", highest_odd);
    } else {
        printf("No odd numbers were entered.\n");
    }

    return 0;
}
