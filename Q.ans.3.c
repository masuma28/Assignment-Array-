#include <stdio.h>

#define MAX_STUDENTS 100

int main() {
    int n, ages[MAX_STUDENTS], count = 0;

    // Input number of students
    printf("Enter the number of students in the class (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Input ages
    printf("Enter the ages of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &ages[i]);

        // Check if age is in teenage range
        if (ages[i] >= 13 && ages[i] <= 19) {
            count++;
        }
    }

    // Display result
    printf("Number of teenagers in the class: %d\n", count);

    return 0;
}
