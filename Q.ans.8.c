#include <stdio.h>

int main() {
    float temperatures[7];
    float highest = -1000.0; // Initialize to a very low value
    int count = 0;

    // Input temperatures for 7 days
    printf("Enter the temperatures for the last 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);

        // Update highest temperature and reset count if new highest is found
        if (temperatures[i] > highest) {
            highest = temperatures[i];
            count = 1;
        } else if (temperatures[i] == highest) {
            // Increment count if temperature matches the current highest
            count++;
        }
    }

    // Display results
    printf("\nThe highest temperature is: %.2f°C\n", highest);
    printf("The highest temperature occurred on %d day(s).\n", count);

    return 0;
}
