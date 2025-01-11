#include <stdio.h>

int main() {
    int temperatures[7];
    int count = 0;

    // Input temperatures for the last 7 days
    printf("Enter the temperatures for the last 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temperatures[i]);
    }

    // Count the number of days where the temperature increased
    for (int i = 1; i < 7; i++) {
        if (temperatures[i] > temperatures[i - 1]) {
            count++;
        }
    }

    // Display the result
    printf("Number of days the temperature increased compared to the previous day: %d\n", count);

    return 0;
}
