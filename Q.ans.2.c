#include <stdio.h>

#define MAX_PEOPLE 100

int main() {
    int n, ages[MAX_PEOPLE], sum = 0, count = 0;
    float average;

    // Input number of people
    printf("Enter the number of people (max %d): ", MAX_PEOPLE);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_PEOPLE) {
        printf("Invalid number of people.\n");
        return 1;
    }

    // Input ages
    printf("Enter the ages of %d people:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Person %d: ", i + 1);
        scanf("%d", &ages[i]);
        sum += ages[i];
    }

    // Calculate average age
    average = (float)sum / n;

    // Count ages above average
    for (int i = 0; i < n; i++) {
        if (ages[i] > average) {
            count++;
        }
    }

    // Display result
    printf("Average age: %.2f\n", average);
    printf("Number of people older than the average age: %d\n", count);

    return 0;
}
