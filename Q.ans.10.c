#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks[n], sum = 0.0, variance = 0.0, avg, stddev;

    // Input marks
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    avg = sum / n;

    // Calculate variance
    for (int i = 0; i < n; i++) {
        variance += pow(marks[i] - avg, 2);
    }
    variance /= n;

    // Calculate standard deviation
    stddev = sqrt(variance);

    // Display results
    printf("Average: %.2f\n", avg);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stddev);

    return 0;
}
