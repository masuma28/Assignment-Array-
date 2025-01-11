#include <stdio.h>

int main() {
    int n, i, fullMarks = 30, found = 0;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Invalid number of students. Exiting.\n");
        return 1;
    }

    int marks[n];

    // Input marks of students
    printf("Enter the marks of %d students (out of 30):\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);

        // Validate if marks are within the range
        if (marks[i] < 0 || marks[i] > fullMarks) {
            printf("Invalid marks entered. Please enter marks between 0 and %d.\n", fullMarks);
            return 1;
        }

        // Check if the student got full marks
        if (marks[i] == fullMarks) {
            found = 1;
        }
    }

    // Display the result
    if (found) {
        printf("At least one student got full marks (30).\n");
    } else {
        printf("No student got full marks (30).\n");
    }

    return 0;
}
